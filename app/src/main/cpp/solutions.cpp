#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "solutions.h"

using namespace std;

string solutions::reverse_a_string(string str) {
    string r_str = string(str.rbegin(), str.rend());
    return r_str;
}

bool solutions::check_for_palindrome(string str) {
    string r_str = string(str.rbegin(), str.rend());
    return str == r_str;
}

int solutions::find_the_maximum_element_in_an_array(int arr[], int length) {
    int max_element = arr[0];
    for (int i = 0; i < length; i++) {
        if(arr[i] > max_element) {
            max_element = arr[i];
        }
    }
    return max_element;
}

string solutions::fizz_buzz_problem(int num) {
    string result = "";
    for (int i = 1; i <= num; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            result += "fizzbuzz\n";
        } else if (i % 3 == 0) {
            result += "fizz\n";
        } else if (i % 5 == 0) {
            result += "buzz\n";
        } else {
            result += to_string(i) + "\n";
        }
    }
    return result;
}

int solutions::count_vowels_in_a_string(string str) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for(int i = 0; i < str.length(); i++) {
        if (vowels.find(str[i]) != std::string::npos) {
            count++;
        }
    }
    return count;
}

vector<int> solutions::remove_duplicates_from_the_list(int arr[], int length) {
    std::vector<int> unique_arr;
    for (int i = 0; i < length; i++) {
        if (std::find(unique_arr.begin(), unique_arr.end(), arr[i]) == unique_arr.end()) {
            unique_arr.push_back(arr[i]);
        }
    }
    return unique_arr;
}

char solutions::findTheFirstNonRepeatedCharInString(std::string str) {
    std::unordered_map<char, int> char_counts;
    for (char c : str) {
        char_counts[c]++;
    }
    for (char c : str) {
        if (char_counts[c] == 1) {
            return c;
        }
    }

    return -1;
}

int solutions::factorialUsingRecursion(int num) {
    if (num <= 1) {
        return 1;
    }
    return num * factorialUsingRecursion(num - 1);
}

int solutions::findTheSecondLargestNumber(int *arr, int length) {
    int largest_num = INT32_MIN;
    int second_largest_num = INT32_MIN;

    for (int i = 0; i < length; i++) {
        if (arr[i] > largest_num) {
            second_largest_num = largest_num;
            largest_num = arr[i];
        }
    }
    return second_largest_num;
}

int solutions::sumOfDigitsInNumber(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}