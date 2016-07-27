#include <jni.h>  
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    JNIEnv *env;  
    JavaVM *jvm;  
    JavaVMInitArgs vm_args;  
    memset(&vm_args, 0, sizeof(vm_args));  
    vm_args.version = JNI_VERSION_1_6;  

    jint status;
    status = JNI_CreateJavaVM(&jvm, (void**) &env, &vm_args);  
    if(status != JNI_ERR){
        jclass date = env->FindClass("java/util/Date");
        jmethodID  init = env->GetMethodID(date, "<init>", "()V");
        jmethodID time_id =  env->GetMethodID(date, "toString", "()Ljava/lang/String;");

        jobject obj = env->NewObject(date, init);
        jstring time = (jstring)env->CallObjectMethod(obj, time_id);

        const char* times = env->GetStringUTFChars(time, NULL);
        cout << times << endl;
        env->ReleaseStringUTFChars(time, times);
        jvm->DestroyJavaVM();  
    }
    else{
        cerr<< "Create JVM Error!\n"<<endl;
    }
}
