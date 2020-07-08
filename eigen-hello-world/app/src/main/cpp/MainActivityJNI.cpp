#include <jni.h>
#include <string>

#define LOG_TAG "MainActivityJNI"
#include "nkh-lab/logger.hpp"

#include <Eigen/Dense>

using Eigen::MatrixXd;

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_eigenhelloworld_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */)
{
    LOG_FNC;

    std::string hello = "Hello from C++";
    LOG_INF << hello;
    LOG_INF << "Testing Eigen::MatrixXd on Android NDK";

    MatrixXd m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 2.5;
    m(0, 1) = -1;
    m(1, 1) = m(1, 0) + m(0, 1);

    LOG_INF << "\n" << m;

    return env->NewStringUTF(hello.c_str());
}
