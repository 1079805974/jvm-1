#include "native/nativeinterface.h"
#include "native/java_lang_thread.h"


void registerNatives()
{
	native_map["vm/lang/Thread"] = java_lang_thread_search_method;
	native_map["java/lang/Thread"] = java_lang_thread_search_method;
}

void *find_native(const string & class_name, const string & methodName, const string & descriptor)	// such as: find_native(L"java/lang/Object", L"notify:()V")
{
	registerNatives();
	std::cout << class_name << endl;
	FP fp = native_map[class_name];
	std::cout << methodName + ":" + descriptor << endl;
	void* result = fp(methodName+":"+ descriptor);
	if (result != nullptr) {
		return result;
	}
	std::cerr << "didn't find [" << class_name << ":" << methodName << "] in native !! it didn't do registerNatives() function!!" << std::endl;
	return nullptr;
}