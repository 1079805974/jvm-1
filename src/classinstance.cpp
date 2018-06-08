#include "classinstance.h"
#include "classviewer.h"
#include "methodarea.h"
#include "heap.h"
#include "stringobject.h"
#include "arrayobject.h"

#include <iostream>
#include <cstdlib>

ClassInstance::ClassInstance(ClassRuntime *classRuntime) : _classRuntime(classRuntime) {
    ClassFile *classFile = classRuntime->getClassFile();
    field_info *fields = classFile->fields;
	method_info* methods = classFile->methods;
    u2 abstractFlag = 0x0400;
    
    if ((classFile->access_flags & abstractFlag) != 0) {
        // Não pode instanciar se for classe abstrata (i.e., interface)
        //不能实例化一个抽象类
        cerr << "InstantiationError" << endl;
        exit(1);
    }
	initFields(classFile, fields);
	initMethods(classFile, methods);
    // quando um objeto é criado, ele precisa ser armazenado na Heap
    Heap &heap = Heap::getInstance();
    heap.addObject(this);
}

void ClassInstance::initFields(ClassFile * classFile, field_info * fields)
{

	for (int i = 0; i < classFile->fields_count; i++) {
		field_info field = fields[i];
		u2 staticAndFinalFlag = 0x0008 | 0x0010;

		if ((field.access_flags & staticAndFinalFlag) == 0) { // não estática e não final
			string fieldName = getFormattedConstant(classFile->constant_pool, field.name_index);
			string fieldDescriptor = getFormattedConstant(classFile->constant_pool, field.descriptor_index);

			char fieldType = fieldDescriptor[0];
			Value value;

			switch (fieldType) {
			case 'B':
				value.type = ValueType::BYTE;
				value.data.byteValue = 0;
				break;
			case 'C':
				value.type = ValueType::CHAR;
				value.data.charValue = 0;
				break;
			case 'D':
				value.type = ValueType::DOUBLE;
				value.data.doubleValue = 0;
				break;
			case 'F':
				value.type = ValueType::FLOAT;
				value.data.floatValue = 0;
				break;
			case 'I':
				value.type = ValueType::INT;
				value.data.intValue = 0;
				break;
			case 'J':
				value.type = ValueType::LONG;
				value.data.longValue = 0;
				break;
			case 'S':
				value.type = ValueType::SHORT;
				value.data.shortValue = 0;
				break;
			case 'Z':
				value.type = ValueType::BOOLEAN;
				value.data.charValue = false;
				break;
			default:
				value.type = ValueType::REFERENCE;
				value.data.object = NULL;
			}

			putValueIntoField(value, fieldName);
		}
	}
}

void ClassInstance::initMethods(ClassFile *classFile, method_info *methods)
{
	for (int i = 0; i < classFile->methods_count; i++) {
		method_info method = methods[i];
		if ((method.access_flags & 0x0008) == 0) { //is not static
			string methodName = getFormattedConstant(classFile->constant_pool, method.name_index);
			string methodDescripor = getFormattedConstant(classFile->constant_pool, method.descriptor_index);
			_methods[methodName + ":" + methodDescripor] = &method;
		}
	}
}

ClassInstance::~ClassInstance() {
    
}

ObjectType ClassInstance::objectType() {
    return ObjectType::CLASS_INSTANCE;
}

ClassRuntime* ClassInstance::getClassRuntime() {
    return _classRuntime;
}

void ClassInstance::putValueIntoField(Value value, string fieldName) {
    _fields[fieldName] = value;
}

Value ClassInstance::getValueFromField(string fieldName) {
    if (_fields.count(fieldName) ==  0) {
        cerr << "NoSuchFieldError" << endl;
        exit(1);
    }
    
    return _fields[fieldName];
}

bool ClassInstance::fieldExists(string fieldName) {
    return _fields.count(fieldName) > 0;
}