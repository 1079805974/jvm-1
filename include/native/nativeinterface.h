#pragma once

#include <map>
#include <string>
#include <iostream>

#define THD "Ljava/lang/Thread;"
#define OBJ "Ljava/lang/Object;"
#define STE "Ljava/lang/StackTraceElement;"
#define TRB "Ljava/lang/Throwable;"
#define STR "Ljava/lang/String;"
#define FLE "Ljava/io/File;"
#define IPS "Ljava/io/InputStream;"
#define PRS "Ljava/io/PrintStream;"
#define PRO "Ljava/util/Properties;"
#define CLS "Ljava/lang/Class;"
#define CPL "Lsun/reflect/ConstantPool;"
#define JCL "Ljava/lang/ClassLoader;"
#define FLD "Ljava/lang/reflect/Field;"
#define MHD "Ljava/lang/reflect/Method;"
#define CTR "Ljava/lang/reflect/Constructor;"
#define PD  "Ljava/security/ProtectionDomain;"
#define PA  "Ljava/security/PrivilegedAction;"
#define PEA "Ljava/security/PrivilegedExceptionAction;"
#define ACC "Ljava/security/AccessControlContext;"
#define BB  "Ljava/nio/ByteBuffer;"
#define VOD "Ljava/lang/Void;"
#define BA  "[B"
#define MN  "Ljava/lang/invoke/MemberName;"
#define MT  "Ljava/lang/invoke/MethodType;"
#define MH  "Ljava/lang/invoke/MethodHandle;"
#define LST "Ljava/util/List;"
using namespace std;
typedef void* (*FP)(const string&);

static map<string, FP> native_map;
void registerNatives();

void * find_native(const string & class_name, const string & methodName, const string & descriptor);
