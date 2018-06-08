
#include "native/java_lang_thread.h"
#define THD L"Ljava/lang/Thread;"
#define OBJ L"Ljava/lang/Object;"
#define STE L"Ljava/lang/StackTraceElement;"
#define TRB L"Ljava/lang/Throwable;"
#define STR L"Ljava/lang/String;"

static map<wstring, void*> methods = {
{ L"start0:()V",						(void *)&JVM_StartThread },
{ L"stop0:(" OBJ L")V",				(void *)&JVM_StopThread },
{ L"isAlive:()Z",						(void *)&JVM_IsThreadAlive },
{ L"suspend0:()V",					(void *)&JVM_SuspendThread },
{ L"resume0:()V",						(void *)&JVM_ResumeThread },
{ L"setPriority0:(I)V",				(void *)&JVM_SetThreadPriority },
{ L"yield:()V",						(void *)&JVM_Yield },
{ L"sleep:(J)V",						(void *)&JVM_Sleep },
{ L"currentThread:()" THD,			(void *)&JVM_CurrentThread },
{ L"countStackFrames:()I",			(void *)&JVM_CountStackFrames },
{ L"interrupt0:()V",					(void *)&JVM_Interrupt },
{ L"isInterrupted:(Z)Z",				(void *)&JVM_IsInterrupted },
{ L"holdsLock:(" OBJ L")Z",			(void *)&JVM_HoldsLock },
{ L"getThreads:()[" THD,				(void *)&JVM_GetAllThreads },
{ L"dumpThreads:([" THD L")[[" STE,	(void *)&JVM_DumpThreads },
{ L"setNativeName:(" STR L")V",		(void *)&JVM_SetNativeThreadName },
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
