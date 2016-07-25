#include <jni.h>
#include <iostream>
using namespace std;
extern "C" {
JNIEXPORT void JNICALL Java_Native_sayHello
  (JNIEnv *, jclass)
{
	cout << "Hello, JNI##########" <<endl;
}
}
