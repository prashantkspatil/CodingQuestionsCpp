#ifndef CODINGQUESTIONS_SOLUTIONS_H
#define CODINGQUESTIONS_SOLUTIONS_H

#include <string>
#include <vector>
using namespace std;

class solutions {
    public:
    string reverse_a_string(string str);
    bool check_for_palindrome(string str);
    int find_the_maximum_element_in_an_array(int *arr, int length);
    string fizz_buzz_problem(int num);
    int count_vowels_in_a_string(string str);
    vector<int> remove_duplicates_from_the_list(int *arr, int length);
    char findTheFirstNonRepeatedCharInString(string str);
    int factorialUsingRecursion(int num);
    int findTheSecondLargestNumber(int *arr, int length);
    int sumOfDigitsInNumber(int num);
    int findTheMissingNumberInArray(int *arr, int length);
    bool checkIfTwoStringsAreAnagram(string str1, string str2);
    vector<int> flattenAListOfIntegers(vector<vector<int>> arr);
};

#endif //CODINGQUESTIONS_SOLUTIONS_H
