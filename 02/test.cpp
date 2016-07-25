#include <jni.h>
#include <iostream>
using namespace std;
extern "C" {

JNIEXPORT void JNICALL Java_Hello_test
  (JNIEnv *env, jobject obj)
{
	jclass hello_clazz = env->GetObjectClass(obj);

	jfieldID fieldID_prop = env->GetFieldID(hello_clazz,
			"property", "I");

	jint number = env->GetIntField(obj, fieldID_prop);
	cout << "number= "<<number<<endl;
	env->SetIntField(obj, fieldID_prop, 500L);

	jmethodID methodID_func = env->GetMethodID(hello_clazz,
			"function", "(ILjava/util/Date;[I)I");
	env->CallIntMethod(obj, methodID_func, 1111L, NULL, NULL);
}

}
