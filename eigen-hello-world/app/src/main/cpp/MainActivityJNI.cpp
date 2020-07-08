#include <jni.h>
#include <string>

#define LOG_TAG "MainActivityJNI"
#include "nkh-lab/logger.hpp"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_eigenhelloworld_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */)
{
    LOG_FNC;

    std::string hello = "Hello from C++";
    LOG_INF << hello;
    return env->NewStringUTF(hello.c_str());
}
