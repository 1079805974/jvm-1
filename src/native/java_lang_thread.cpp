
#include "native/java_lang_thread.h"
#include "thread.h"
#include "methodarea.h"
#include "native/nativeinterface.h"
#include "executionengine.h"


static map<string, void*> methods = {
{ "start0:()V",						(void *)&JVM_StartThread },
{ "stop0:(" OBJ ")V",				(void *)&JVM_StopThread },
{ "isAlive:()Z",						(void *)&JVM_IsThreadAlive },
{ "suspend0:()V",					(void *)&JVM_SuspendThread },
{ "resume0:()V",						(void *)&JVM_ResumeThread },
{ "setPriority0:(I)V",				(void *)&JVM_SetThreadPriority },
{ "yield:()V",						(void *)&JVM_Yield },
{ "sleep:(J)V",						(void *)&JVM_Sleep },
{ "currentThread:()" THD,			(void *)&JVM_CurrentThread },
{ "countStackFrames:()I",			(void *)&JVM_CountStackFrames },
{ "interrupt0:()V",					(void *)&JVM_Interrupt },
{ "isInterrupted:(Z)Z",				(void *)&JVM_IsInterrupted },
{ "holdsLock:(" OBJ ")Z",			(void *)&JVM_HoldsLock },
{ "getThreads:()[" THD,				(void *)&JVM_GetAllThreads },
{ "dumpThreads:([" THD ")[[" STE,	(void *)&JVM_DumpThreads },
{ "setNativeName:(" STR ")V",		(void *)&JVM_SetNativeThreadName },
};


void JVM_StartThread(ClassInstance *threadInstance) {
	Thread* thread = new Thread(2);
	vector<Value> args;
	Value obj;
	ClassRuntime *runtime = threadInstance->getClassRuntime();
	obj.type = REFERENCE;
	obj.printType = REFERENCE;
	obj.data.object = threadInstance;
	args.insert(args.begin(), obj);
	thread->addFrame(new Frame(threadInstance, runtime, "run", "()V", args));
	Thread::appendNewThread(thread);
}

void JVM_StopThread(ClassInstance *threadInstance) {
	
}
void JVM_IsThreadAlive(ClassInstance *threadInstance) {
	
}
void JVM_SuspendThread(ClassInstance *threadInstance) {
	
}
void JVM_ResumeThread(ClassInstance *threadInstance) {
	
}
void JVM_SetThreadPriority(ClassInstance *threadInstance) {
	
}
void JVM_Yield(ClassInstance *threadInstance) {			// static
	
}
void JVM_Sleep(ClassInstance *threadInstance) {			// static
	
}
void JVM_CurrentThread(ClassInstance *threadInstance) {		// static
	
}
void JVM_CountStackFrames(ClassInstance *threadInstance) {

}
void JVM_Interrupt(ClassInstance *threadInstance) {
	
}
void JVM_IsInterrupted(ClassInstance *threadInstance) {
	
}
void JVM_HoldsLock(ClassInstance * threadInstance)
{
}
void JVM_GetAllThreads(ClassInstance * threadInstance)
{
}
void JVM_DumpThreads(ClassInstance * threadInstance)
{
}
void JVM_SetNativeThreadName(ClassInstance *threadInstance) {
	
}
void* java_lang_thread_search_method(const string & str)
{
	return methods[str];
}

