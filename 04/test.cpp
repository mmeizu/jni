#include <jni.h>
#include <iostream>
using namespace std;
extern "C" {

JNIEXPORT void JNICALL Java_Hello_test
  (JNIEnv *env, jobject obj)
{
	jclass clazz_date = env->FindClass("java/util/Date");
	jmethodID mid_date = env->GetMethodID(clazz_date, "<init>", "()V");
	jobject date = env->NewObject(clazz_date, mid_date);
	jmethodID get_time =  env->GetMethodID(clazz_date, "getTime", "()J");
	jlong time = env->CallLongMethod(date, get_time);
	cout << (time+500)/1000 <<endl;
}
}
