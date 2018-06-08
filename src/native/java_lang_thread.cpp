
#include "native/java_lang_thread.h"
#define THD "Ljava/lang/Thread;"
#define OBJ "Ljava/lang/Object;"
#define STE "Ljava/lang/StackTraceElement;"
#define TRB "Ljava/lang/Throwable;"
#define STR "Ljava/lang/String;"

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


void JVM_StartThread(list<ClassInstance *> & _stack) {
	
}

void JVM_StopThread(list<ClassInstance *> & _stack) {
	
}
void JVM_IsThreadAlive(list<ClassInstance *> & _stack) {
	
}
void JVM_SuspendThread(list<ClassInstance *> & _stack) {
	
}
void JVM_ResumeThread(list<ClassInstance *> & _stack) {
	
}
void JVM_SetThreadPriority(list<ClassInstance *> & _stack) {
	
}
void JVM_Yield(list<ClassInstance *> & _stack) {			// static
	
}
void JVM_Sleep(list<ClassInstance *> & _stack) {			// static
	
}
void JVM_CurrentThread(list<ClassInstance *> & _stack) {		// static
	
}
void JVM_CountStackFrames(list<ClassInstance *> & _stack) {

}
void JVM_Interrupt(list<ClassInstance *> & _stack) {
	
}
void JVM_IsInterrupted(list<ClassInstance *> & _stack) {
	
}
void JVM_SetNativeThreadName(list<ClassInstance *> & _stack) {
	
}

void *java_lang_thread_search_method(const wstring & signature)
{

}
