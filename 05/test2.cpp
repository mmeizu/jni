#include <jni.h> 
#include <iostream>

int main()
{
    JavaVM *jvm; /* denotes a Java VM */
    JNIEnv *env; /* pointer to native method interface */

   JavaVMInitArgs vm_args;
   JavaVMOption options[1];
   options[0].optionString = (char *) "-Djava.class.path=./";

   vm_args.version = JNI_VERSION_1_6;
   vm_args.options = options;
   vm_args.nOptions = 1;
   //vm_args.ignoreUnrecognized = JNI_FALSE;

   /* Create the Java VM */
   int res = JNI_CreateJavaVM(&jvm, (void **)&env, &vm_args); // this is what it can't find
   if (res != JNI_ERR){
       /* invoke the Main.test method using the JNI */
       jclass cls = env->FindClass("Hello");
       if(cls == NULL) {
           std::cout << "Unable to find class Hello" <<std::endl;
           return -1;
       }
       jmethodID mid = env->GetStaticMethodID(cls, "staticInt", "(I)I");
       env->CallStaticVoidMethod(cls, mid,10);

       /* We are done. */
       jvm->DestroyJavaVM();
   }
}
