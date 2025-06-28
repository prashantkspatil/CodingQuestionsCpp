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

extern "C" JNIEXPORT jint JNICALL
Java_pp_codingquestionscpp_JniCall_findTheMissingNumberInArray (
        JNIEnv* env,
        jobject /* this */ obj,
        jintArray input
) {
    jsize length = env->GetArrayLength(input);
    jint *j_arr = env->GetIntArrayElements(input, nullptr);
    if (j_arr == nullptr) {
        return -1;
    }
    int result = solutions().findTheMissingNumberInArray(j_arr, length);
    return result;
}

extern "C" JNIEXPORT jboolean JNICALL
Java_pp_codingquestionscpp_JniCall_checkIfTwoStringsAreAnagram (
        JNIEnv* env,
        jobject /* this */ obj,
        jstring input1,
        jstring input2
) {
    string str1 = env->GetStringUTFChars(input1, nullptr);
    string str2 = env->GetStringUTFChars(input2, nullptr);
    int result = solutions().checkIfTwoStringsAreAnagram(str1, str2);
    return result;
}

extern "C" JNIEXPORT jintArray JNICALL
Java_pp_codingquestionscpp_JniCall_flattenAListOfIntegers (
        JNIEnv* env,
        jobject /* this */ obj,
        jobjectArray objArr
) {
    vector<vector<int>> arr;

    auto length = env->GetArrayLength(objArr);
    for (int i = 0; i < length; i++) {
        jobject innerArr = env->GetObjectArrayElement(objArr, i);
        jint *j_arr = env->GetIntArrayElements((jintArray)innerArr, nullptr);
        if (j_arr == nullptr) {
            return nullptr;
        }
        vector<int> inner_vector;
        for (int j = 0; j < length; j++) {
            inner_vector.push_back(j_arr[j]);
        }
        arr.push_back(inner_vector);
    }
    vector<int> result = solutions().flattenAListOfIntegers(arr);

    jintArray result_array = env->NewIntArray(result.size());
    env->SetIntArrayRegion(result_array, 0, result.size(), result.data());
    return result_array;
}

extern "C" JNIEXPORT jboolean JNICALL
Java_pp_codingquestionscpp_JniCall_checkIfNumberIsPrime (
        JNIEnv* env,
        jobject /* this */ obj,
        jint input
) {
    bool result = solutions().checkIfNumberIsPrime(input);
    return result;
}

extern "C" JNIEXPORT jintArray JNICALL
Java_pp_codingquestionscpp_JniCall_findCommonElementInTwoArray (
        JNIEnv* env,
        jobject /* this */ obj,
        jintArray input1,
        jintArray input2
) {
    jsize length1 = env->GetArrayLength(input1);
    jint *j_arr1 = env->GetIntArrayElements(input1, nullptr);
    if (j_arr1 == nullptr) {
        return nullptr;
    }
    jsize length2 = env->GetArrayLength(input2);
    jint *j_arr2 = env->GetIntArrayElements(input2, nullptr);
    if (j_arr2 == nullptr) {
        return nullptr;
    }
    vector<int> vec1;
    vector<int> vec2;

    vec1.insert(vec1.end(), j_arr1, j_arr1 + length1);
    vec2.insert(vec2.end(), j_arr2, j_arr2 + length2);
    vector<int> result = solutions().findCommonElementInTwoArray(vec1, vec2);
    jintArray result_array = env->NewIntArray(result.size());
    env->SetIntArrayRegion(result_array, 0, result.size(), result.data());
    return result_array;
}

extern "C" JNIEXPORT jobject JNICALL
Java_pp_codingquestionscpp_JniCall_sortAListOfStringByItsLengths (
        JNIEnv* env,
        jobject /* this */ obj,
        jobject input
) {
    jclass stringListClass = env->GetObjectClass(input);
    jmethodID size_method = env->GetMethodID(stringListClass, "size", "()I");
    jint j_size = env->CallIntMethod(input, size_method);
    vector<string> stringList;
    jmethodID get_method = env->GetMethodID(stringListClass, "get", "(I)Ljava/lang/Object;");

    for (int i = 0; i < j_size; i++) {
        jobject j_string = env->CallObjectMethod(input, get_method, i);
        string c_string = env->GetStringUTFChars((jstring) j_string, nullptr);
        stringList.push_back(c_string);
    }
    vector<string> result = solutions().sortAListOfStringByItsLengths(stringList);

    jclass arraylist_class = env->FindClass("java/util/ArrayList");
    jobject arraylist = env->NewObject(arraylist_class, env->GetMethodID(arraylist_class, "<init>", "()V"));
    jmethodID add_method = env->GetMethodID(arraylist_class, "add", "(Ljava/lang/Object;)Z");
    for(string s : result) {
        env->CallBooleanMethod(arraylist, add_method, env->NewStringUTF(s.c_str()));
    }

    return arraylist;
}

extern "C" JNIEXPORT jstring JNICALL
Java_pp_codingquestionscpp_JniCall_findTheLargestPalindromeInAString (
        JNIEnv* env,
        jobject /* this */ obj,
        jstring input
) {
    std::string c_str = env->GetStringUTFChars(input, nullptr);

    string result = solutions().findTheLargestPalindromeInAString(c_str);
    return env->NewStringUTF(result.c_str());
}
