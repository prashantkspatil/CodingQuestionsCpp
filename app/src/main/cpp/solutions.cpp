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

int solutions::findTheMissingNumberInArray(int *arr, int length) {
    int total_sum = (length + 1) * (length + 2) / 2;
    int arr_sum = 0;
    for (int i = 0; i < length; i++) {
        arr_sum += arr[i];
    }
    return total_sum - arr_sum;
}

bool solutions::checkIfTwoStringsAreAnagram(std::string str1, std::string str2) {
    if(str1.length() != str2.length()) {
        return false;
    }
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    return str1 == str2;
}

vector<int> solutions::flattenAListOfIntegers(vector<vector<int>> arr) {
    vector<int> flattened_arr;
    for (auto & i : arr) {
        for (int j : i) {
            flattened_arr.push_back(j);
        }
    }
    return flattened_arr;
}

bool solutions::checkIfNumberIsPrime(int num) {
    int num_sqrt = sqrt((double)num);
    for (int i = 2; i <= num_sqrt; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> solutions::findCommonElementInTwoArray(vector<int> arr1, vector<int> arr2) {
    vector<int> common_arr;
    for (int i : arr1) {
        for (int j : arr2) {
            if (i == j) {
                common_arr.push_back(i);
            }
        }
    }
    return common_arr;
}

vector<string> solutions::sortAListOfStringByItsLengths(vector<string> stringList) {
    vector<string> copy_stringList(stringList.begin(), stringList.end());
    std::sort(copy_stringList.begin(), copy_stringList.end(),
              [](const string& a, const string& b) {
                    return a.length() < b.length();
                });
    return copy_stringList;
}

string solutions::findTheLargestPalindromeInAString(string str) {
    string largest_palindrome = "";
    for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j <= str.length(); j++) {
            string sub_str = str.substr(i, j - i);
            if (check_for_palindrome(sub_str) && sub_str.length() > largest_palindrome.length()) {
                largest_palindrome = sub_str;
            }
        }
    }
    return largest_palindrome;
}