#include <jni.h>
#include <iostream>
using namespace std;
extern "C" {

JNIEXPORT void JNICALL Java_Hello_test
  (JNIEnv *env, jobject obj)
{
	jclass hello_clazz = env->GetObjectClass(obj);

	jfieldID fieldID_prop = env->GetFieldID(hello_clazz,
			"p", "LFather;");

	jobject father = env->GetObjectField(obj, fieldID_prop);
	jclass father_clazz = env->FindClass("Father");
	jmethodID fuc = env->GetMethodID(father_clazz, "function", "()V");
	env->CallVoidMethod(father, fuc);
	env->CallNonvirtualVoidMethod(father, father_clazz, fuc);
}
}
