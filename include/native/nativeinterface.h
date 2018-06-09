#pragma once

#include <map>
#include <string>
#include <iostream>
#include <functional>

using namespace std;

static map<string, function<void*(const string &)>> native_map;
void registerNatives();

void * find_native(const string & class_name, const string & methodName, const string & descriptor);
