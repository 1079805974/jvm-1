#pragma once

#include <map>
#include <string>
#include <list>
#include <unordered_map>

#include "classinstance.h"

using std::list;

void JVM_IHashCode(ClassInstance *threadInstance);
void JVM_MonitorWait(ClassInstance *threadInstance);
void JVM_MonitorNotify(ClassInstance *threadInstance);
void JVM_MonitorNotifyAll(ClassInstance *threadInstance);
void JVM_Clone(ClassInstance *threadInstance);
void Java_java_lang_object_getClass(ClassInstance *threadInstance);

void* java_lang_object_search_method(const string & str);

