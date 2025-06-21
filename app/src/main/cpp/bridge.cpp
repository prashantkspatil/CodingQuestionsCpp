#include <jni.h>
#include <string>
#include <vector>
#include "solutions.h"

using namespace std;


extern "C" JNIEXPORT jstring JNICALL
Java_pp_codingquestionscpp_JniCall_reverse_1a_1string (
        JNIEnv* env,
        jobject /* this */ obj,
        jstring str) {
    std::string c_str = env->GetStringUTFChars(str, nullptr);

    string r_string = solutions().reverse_a_string(c_str);
    return env->NewStringUTF(r_string.c_str());
}

extern "C" JNIEXPORT jboolean JNICALL
Java_pp_codingquestionscpp_JniCall_check_1for_1palindrome (
        JNIEnv* env,
        jobject /* this */ obj,
        jstring str) {
    std::string c_str = env->GetStringUTFChars(str, nullptr);

    return solutions().check_for_palindrome(c_str);
}

extern "C" JNIEXPORT jint JNICALL
Java_pp_codingquestionscpp_JniCall_find_1the_1maximum_1element_1in_1an_1array (
    JNIEnv* env,
    jobject /* this */ obj,
    jintArray inputArr
) {
    jsize length = env->GetArrayLength(inputArr);
    jint *j_arr = env->GetIntArrayElements(inputArr, nullptr);
    if (j_arr == nullptr) {
        return -1;
    }
    int max_element = solutions().find_the_maximum_element_in_an_array(j_arr, length);

    return static_cast<jint>(max_element);
}

extern "C" JNIEXPORT jstring JNICALL
Java_pp_codingquestionscpp_JniCall_fizz_1buzz_1problem (
        JNIEnv* env,
        jobject /* this */ obj,
        jint input
) {
    string result = solutions().fizz_buzz_problem(input);

    return env->NewStringUTF(result.c_str());
}


extern "C" JNIEXPORT jint JNICALL
Java_pp_codingquestionscpp_JniCall_count_1vowels_1in_1a_1string (
        JNIEnv* env,
        jobject /* this */ obj,
        jstring input
) {
    std::string c_str = env->GetStringUTFChars(input, nullptr);

    int count = solutions().count_vowels_in_a_string(c_str);
    return static_cast<jint>(count);
}

extern "C" JNIEXPORT jintArray JNICALL
Java_pp_codingquestionscpp_JniCall_remove_1duplicates_1from_1the_1list (
        JNIEnv* env,
        jobject /* this */ obj,
        jintArray input
) {
    jsize length = env->GetArrayLength(input);
    jint *j_arr = env->GetIntArrayElements(input, nullptr);
    if (j_arr == nullptr) {
        return nullptr;
    }
    std::vector<int> result = solutions().remove_duplicates_from_the_list(j_arr, length);
    jintArray result_array = env->NewIntArray(result.size());
    env->SetIntArrayRegion(result_array, 0, result.size(), result.data());
    return result_array;
}

extern "C" JNIEXPORT jchar JNICALL
Java_pp_codingquestionscpp_JniCall_findTheFirstNonRepeatedCharInString (
        JNIEnv* env,
        jobject /* this */ obj,
        jstring input
) {
    string in_str = env->GetStringUTFChars(input, nullptr);

    char result = solutions().findTheFirstNonRepeatedCharInString(in_str);
    return result;
}

extern "C" JNIEXPORT jint JNICALL
Java_pp_codingquestionscpp_JniCall_factorialUsingRecursion (
        JNIEnv* env,
        jobject /* this */ obj,
        jint input
) {
    char result = solutions().factorialUsingRecursion(input);
    return result;
}

extern "C" JNIEXPORT jint JNICALL
Java_pp_codingquestionscpp_JniCall_findTheSecondLargestNumber (
        JNIEnv* env,
        jobject /* this */ obj,
        jintArray input
) {
    jsize length = env->GetArrayLength(input);
    jint *j_arr = env->GetIntArrayElements(input, nullptr);
    if (j_arr == nullptr) {
        return -1;
    }
    int result = solutions().findTheSecondLargestNumber(j_arr, length);
    return result;
}

extern "C" JNIEXPORT jint JNICALL
Java_pp_codingquestionscpp_JniCall_sumOfDigitsInNumber (
        JNIEnv* env,
        jobject /* this */ obj,
        jint input
) {
    char result = solutions().sumOfDigitsInNumber(input);
    return result;
}
