#pragma once

#include <map>
#include <string>
#include <iostream>

typedef void* (*FP)(string&);
using namespace std;

static map<string, FP> native_map;
void registerNatives();

void * find_native(const string & class_name, const string & methodName, const string & descriptor);
