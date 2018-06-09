#pragma once

#include <map>
#include <string>
#include <iostream>

using namespace std;
typedef void* (*FP)(const string&);

static map<string, FP> native_map;
void registerNatives();

void * find_native(const string & class_name, const string & methodName, const string & descriptor);
