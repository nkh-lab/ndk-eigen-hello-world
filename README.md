# ndk-eigen-hello-world
Android Studio example how to use Eigen library from native code.

Example based on: https://eigen.tuxfamily.org/dox/GettingStarted.html

## Environment
- Android Studio

## Dependencies
Git submodule projects:
- Eigen: For now used forked project (https://github.com/nkh-lab/eigen-git-mirror) due to some adaptation is needed to Android NDK build.
- logger: For easy logging (https://github.com/nkh-lab/logger.git).

## Project setup
1. Clone main git project:
```
git clone https://github.com/nkh-lab/ndk-eigen-hello-world.git
```
2. Clone submodule projects:
```
git submodule update --init
```

## Open project in Android Studio
1. Run Android Studio
2. Then open ndk-eigen-hello-world/eigen-hello-world project
3. Build and run
4. Expected app output in Logcat:
```
2020-07-09 00:05:52.432 7690-7690/com.example.eigenhelloworld D/MainActivityJNI: [--->] MainActivityJNI.cpp:14 Java_com_example_eigenhelloworld_MainActivity_stringFromJNI()
2020-07-09 00:05:52.432 7690-7690/com.example.eigenhelloworld I/MainActivityJNI: MainActivityJNI.cpp:17 Java_com_example_eigenhelloworld_MainActivity_stringFromJNI() Hello from C++
2020-07-09 00:05:52.432 7690-7690/com.example.eigenhelloworld I/MainActivityJNI: MainActivityJNI.cpp:18 Java_com_example_eigenhelloworld_MainActivity_stringFromJNI() Testing Eigen::MatrixXd on Android NDK
2020-07-09 00:05:52.432 7690-7690/com.example.eigenhelloworld I/MainActivityJNI: MainActivityJNI.cpp:26 Java_com_example_eigenhelloworld_MainActivity_stringFromJNI() 
      3  -1
    2.5 1.5
2020-07-09 00:05:52.432 7690-7690/com.example.eigenhelloworld D/MainActivityJNI: [<---] MainActivityJNI.cpp:14 Java_com_example_eigenhelloworld_MainActivity_stringFromJNI()
```

