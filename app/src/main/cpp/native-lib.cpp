#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_tesseract_1ocr_1test_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}extern "C"
JNIEXPORT void JNICALL
Java_com_example_tesseract_1ocr_1test_MainActivity_ConvertRGBtoGray(JNIEnv *env, jobject thiz,
                                                                    jlong mat_addr_input,
                                                                    jlong mat_addr_result) {
    // TODO: implement ConvertRGBtoGray()
}