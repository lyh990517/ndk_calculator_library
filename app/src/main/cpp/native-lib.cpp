#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_ndkstudy_MainActivity_performCalculation(JNIEnv* env, jobject /* this */, jint num1, jint num2) {
    // Perform addition
    jint additionResult = num1 + num2;

    // Perform subtraction
    jint subtractionResult = num1 - num2;

    // Perform multiplication
    jint multiplicationResult = num1 * num2;

    // Perform division
    jint divisionResult = num1 / num2;

    // Convert the results to string
    std::string result = "Addition: " + std::to_string(additionResult) + "\n"
                         + "Subtraction: " + std::to_string(subtractionResult) + "\n"
                         + "Multiplication: " + std::to_string(multiplicationResult) + "\n"
                         + "Division: " + std::to_string(divisionResult);

    return env->NewStringUTF(result.c_str());
}

