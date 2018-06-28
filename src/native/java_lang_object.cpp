#include "native/java_lang_object.h"
#include "native/nativeinterface.h"
#include "thread.h"
#include "methodarea.h"
#include <assert.h>

static unordered_map<string, void*> methods = {
{ "hashCode:()I",				(void *)&JVM_IHashCode },
{ "wait:(J)V",					(void *)&JVM_MonitorWait },
{ "notify:()V",					(void *)&JVM_MonitorNotify },
{ "notifyAll:()V",				(void *)&JVM_MonitorNotifyAll },
{ "clone:()" OBJ,				(void *)&JVM_Clone },
{ "getClass:()" CLS,			(void *)&Java_java_lang_object_getClass },		
};

void JVM_IHashCode(ClassInstance * threadInstance)
{

}

void JVM_MonitorWait(ClassInstance * threadInstance)
{
}

void JVM_MonitorNotify(ClassInstance * threadInstance)
{
}

void JVM_MonitorNotifyAll(ClassInstance * threadInstance)
{
}

void JVM_Clone(ClassInstance * threadInstance)
{
}

void Java_java_lang_object_getClass(ClassInstance * threadInstance)
{
	Thread* thread = Thread::currentThread();
	Frame *topFrame = thread->getTopFrame();
	Value value = topFrame->popTopOfOperandStack();
	assert(value.type == ValueType::REFERENCE);
	ClassInstance *instance = (ClassInstance*)value.data.object;
	ClassRuntime* runtime = instance->getClassRuntime();
	value.data.object = runtime->reflectClass;
	topFrame->pushIntoOperandStack(value);
}

void * java_lang_object_search_method(const string & str)
{
	return methods[str];
}
