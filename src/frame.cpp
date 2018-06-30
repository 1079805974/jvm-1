#include "frame.h"

#include <iostream>
#include <cstring>
#include <cassert>
#include <cstdlib>

#include "utils.h"
#include "classviewer.h"
#include "methodarea.h"
#include "vmstack.h"
#include "native/nativeinterface.h"

Frame::Frame(ClassInstance *object, ClassRuntime *classRuntime, string methodName, string methodDescriptor, vector<Value> arguments) : pc(0), _object(object), isSync(false), isStatic(false){
    
    for (int i = 0; i < arguments.size(); i++) {
        _localVariables[i] = arguments[i];
    }
#ifdef DEBUG
	cout << "new method:" << methodName << endl;
#endif // DEBUG

    method_info *method = getMethodNamed(classRuntime, methodName, methodDescriptor);
    assert(method != NULL);
    _method = *method;
    assert((_method.access_flags & 0x0008) == 0); // o método não pode ser estático
	if ((_method.access_flags & 0x0100) != 0) { //is native method
		pc = -1;
		void* fp = find_native(classRuntime->name, methodName, methodDescriptor);
		((void(*)(ClassInstance *))fp)(object);
	}
	if ((_method.access_flags & 0x0020) != 0) {//is synchronize method
		cout << "new Sync" << methodName << endl;
		isSync = true;
	}
	findAttributes();
}

Frame::Frame(ClassRuntime *classRuntime, string methodName, string methodDescriptor, vector<Value> arguments) : pc(0),  isSync(false) , isStatic(true) {
	_object = classRuntime->reflectClass;
    for (int i = 0; i < arguments.size(); i++) {
        _localVariables[i] = arguments[i];
    }
    
    cout << "load method: "<< methodName << endl;
	
    method_info *method = getMethodNamed(classRuntime, methodName, methodDescriptor);
    assert(method != NULL);
    _method = *method;
    assert((_method.access_flags & 0x0008) != 0); // o método precisa ser estático
	if ((_method.access_flags & 0x0020) != 0) {//is synchronize method
		isSync = true;
		findAttributes();
	}
    findAttributes();
}

Frame::~Frame() {
    
}


cp_info** Frame::getConstantPool() {
    return &(_classRuntime->getClassFile()->constant_pool);
}

Value Frame::getLocalVariableValue(uint32_t index) {
    if (index >= _codeAttribute->max_locals) {
        cerr << "Tentando acessar variavel local inexistente" << endl;
        exit(1);
    }
    
    return _localVariables[index];
}

void Frame::changeLocalVariable(Value variableValue, uint32_t index) {
    if (index >= _codeAttribute->max_locals) {
        cerr << "Tentando alterar variavel local inexistente" << endl;
        exit(1);
    }
    
//    if (_localVariables.count(index) > 0 && variableValue.type != _localVariables[index].type) {
//        cerr << "Tentando alterar variavel local com outro tipo" << endl;
//        exit(1);
//    }
    
    _localVariables[index] = variableValue;
}

void Frame::pushIntoOperandStack(Value operand) {
    _operandStack.push(operand);
}

Value Frame::popTopOfOperandStack() {
    if (_operandStack.size() == 0) {
        cerr << "IndexOutOfBoundsException" << endl;
       // exit(1);
    }
    
    Value top = _operandStack.top();
    
    _operandStack.pop();
    return top;
}

stack<Value> Frame::backupOperandStack() {
	VMStack &stackFrame = VMStack::getInstance();
	//this->pc = stackFrame.pc;
	stackFrame.pc = 0;
    return _operandStack;
}

void Frame::setOperandStackFromBackup(stack<Value> backup) {
	VMStack &stackFrame = VMStack::getInstance();
	stackFrame.pc = this->pc;
    _operandStack = backup;
}

ClassInstance * Frame::getObject()
{
	return _object;
}

u1* Frame::getCode(uint32_t address) {
    return _codeAttribute->code + address;
}

method_info* Frame::getMethodNamed(ClassRuntime *classRuntime, string name, string descriptor) {
    MethodArea &methodArea = MethodArea::getInstance();
    
    ClassRuntime *currClass = classRuntime;
    method_info *method;
    
    while (currClass != NULL) {
        ClassFile *classFile = currClass->getClassFile();
        
        for (int i = 0; i < classFile->methods_count; i++) {
            method = &(classFile->methods[i]);
            string methodName = getFormattedConstant(classFile->constant_pool, method->name_index);
            string methodDesc = getFormattedConstant(classFile->constant_pool, method->descriptor_index);
            
            if (methodName == name && methodDesc == descriptor) {
                _classRuntime = currClass;
                return method;
            }
        }
        
        // procurando o método nas super classes.
        if (classFile->super_class == 0) {
            currClass = NULL;
        } else {
            string superClassName = getFormattedConstant(classFile->constant_pool, classFile->super_class);
            currClass = methodArea.loadClassNamed(superClassName);
        }
    }
    
    return NULL;
}

void Frame::findAttributes() {
    cp_info *constantPool = *getConstantPool();
    
    _codeAttribute = NULL;
    _exceptionsAttribute = NULL;
    
    for (int i = 0; i < _method.attributes_count; i++) {
        attribute_info *attr = &(_method.attributes[i]);
        CONSTANT_Utf8_info attrName = constantPool[attr->attribute_name_index-1].info.utf8_info;
        
        if (Utils::compareUtf8WithString(attrName, "Code")) {
            _codeAttribute = &(attr->info.code_info);
            if (_exceptionsAttribute != NULL) break;
        } else if (Utils::compareUtf8WithString(attrName, "Exceptions")) {
            _exceptionsAttribute = &(attr->info.exceptions_info);
            if (_codeAttribute != NULL) break;
        }
    }
}

u2 Frame::sizeLocalVariables() {
	return _codeAttribute->max_locals;
}

u4 Frame::sizeCode() {
	return _codeAttribute->code_length;
}
