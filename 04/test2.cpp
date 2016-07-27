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

	jmethodID time_id =  env->GetMethodID(clazz_date, "toString", "()Ljava/lang/String;");
	jstring time = (jstring)env->CallObjectMethod(date, time_id);

    jsize len = env->GetStringUTFLength(time);
    char* buf = new char[len+1];
    buf[len] = '\0';
	env->GetStringUTFRegion(time, 0, len, buf);
	cout << buf << endl;
    delete[] buf;
}

}
