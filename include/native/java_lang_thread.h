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

void JVM_StartThread(ClassInstance *threadInstance);
void JVM_StopThread(ClassInstance *threadInstance);
void JVM_IsThreadAlive(ClassInstance *threadInstance);
void JVM_SuspendThread(ClassInstance *threadInstance);
void JVM_ResumeThread(ClassInstance *threadInstance);
void JVM_SetThreadPriority(ClassInstance *threadInstance);
void JVM_Yield(ClassInstance *threadInstance);
void JVM_Sleep(ClassInstance *threadInstance);
void JVM_CurrentThread(ClassInstance *threadInstance);
void JVM_CountStackFrames(ClassInstance *threadInstance);
void JVM_Interrupt(ClassInstance *threadInstance);
void JVM_IsInterrupted(ClassInstance *threadInstance);
void JVM_HoldsLock(ClassInstance *threadInstance);
void JVM_GetAllThreads(ClassInstance *threadInstance);
void JVM_DumpThreads(ClassInstance *threadInstance);
void JVM_SetNativeThreadName(ClassInstance *threadInstance);

void *java_lang_thread_search_method(const wstring & str);

