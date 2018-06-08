#pragma once

#include <map>
#include <string>
#include <list>
#include <unordered_map>

#include "classinstance.h"
using std::list;
/*===-------------- from hotspot -------------------*/
enum ThreadPriority {        // JLS 20.20.1-3
	NoPriority = -1,     // Initial non-priority value
	MinPriority = 1,     // Minimum priority
	NormPriority = 5,     // Normal (non-daemon) priority
	NearMaxPriority = 9,     // High priority, used for VMThread
	MaxPriority = 10,     // Highest priority, used for WatcherThread
						  // ensures that VMThread doesn't starve profiler
	CriticalPriority = 11      // Critical thread priority
};

void JVM_StartThread(list<ClassInstance *> & _stack);
void JVM_StopThread(list<ClassInstance *> & _stack);
void JVM_IsThreadAlive(list<ClassInstance *> & _stack);
void JVM_SuspendThread(list<ClassInstance *> & _stack);
void JVM_ResumeThread(list<ClassInstance *> & _stack);
void JVM_SetThreadPriority(list<ClassInstance *> & _stack);
void JVM_Yield(list<ClassInstance *> & _stack);
void JVM_Sleep(list<ClassInstance *> & _stack);
void JVM_CurrentThread(list<ClassInstance *> & _stack);
void JVM_CountStackFrames(list<ClassInstance *> & _stack);
void JVM_Interrupt(list<ClassInstance *> & _stack);
void JVM_IsInterrupted(list<ClassInstance *> & _stack);
void JVM_HoldsLock(list<ClassInstance *> & _stack);
void JVM_GetAllThreads(list<ClassInstance *> & _stack);
void JVM_DumpThreads(list<ClassInstance *> & _stack);
void JVM_SetNativeThreadName(list<ClassInstance *> & _stack);

void *java_lang_thread_search_method(const wstring & str);

