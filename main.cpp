#include <iostream>
#include "oneDArraysEQ1.h"
#include "oneDArraysEQ2.h"
#include "oneDArraysEQ3.h"
#include "oneDArraysEQ4.h"
#include "oneDArraysEQ5.h"
#include "oneDArraysMQ1.h"
#include "oneDArraysMQ2.h"
#include "oneDArraysMQ3.h"
#include "oneDArraysMQ4.h"
#include "oneDArraysMQ5.h"
#include "oneDArraysMQ6.h"
using namespace std;

int main()
{
    /** Printing Array forward and backward **/
//    const int size = 5;
//
//    int numbers[size] = {1, 2, 3, 4, 5};
//
//    for (int i = 0; i < size; ++i) {
//        cout << numbers[i] << ' ';
//    }
//
//    cout << endl;
//
//    for (int i = 0; i < size; ++i) {
//        cout << numbers[size - i - 1] << ' ';
//    }

    /** Read 5 numbers in array - find minimum **/
//    const int size = 5;
//    int numbers[size];
//
//    for (int i = 0; i < size; ++i)
//        cin >> numbers[i];
//
//    int minimum = numbers[0];
//
//    for (int i = 1; i < size; ++i)
//        if (minimum > numbers[i])
//            minimum = numbers[i];
//
//    cout << minimum;

    /** Find first and second Maximum values **/

//    int n;
//    cin >> n;
//    int numbers[200];
//
//    for (int i = 0; i < n; ++i)
//        cin >> numbers[i];
//
//    int max1 = numbers[0];
//    int max2 = 0;
//    for (int i = 1; i < n; ++i)
//        if (numbers[i] > max1)
//            max1 = numbers[i];
//
//    for (int i = 0; i < n; ++i)
//        if (numbers[i] > max2 && max1 != numbers[i])
//            max2 = numbers[i];

//    cout << max1 << " " << max2 << endl;

    /** Another approach **/

//    int n;
//    cin >> n;
//    int numbers[200];
//
//    for (int i = 0; i < n; ++i)
//        cin >> numbers[i];
//
//    int max1, max2;
//    if (numbers[0] >= numbers[1])
//        max1 = numbers[0], max2 = numbers[1];
//    else
//        max1 = numbers[1], max2 = numbers[0];
//
//    for (int i = 2; i < n; ++i)
//        if (numbers[i] >= max1) {
//            max2 = max1;
//            max1 = numbers[i];
//        }else if (max2 < numbers[i])
//            max2 = numbers[i];
//
//    cout << max1 << ' ' << max2;

    /** find pair values of maximum sum **/

//    int n, numbers[200];
//
//    cin >> n;
//    for (int i = 0; i < n; ++i)
//        cin >> numbers[i];
//
//    int max1, max2;
//    if (numbers[0] >= numbers[1])
//        max1 = numbers[0], max2 = numbers[1];
//    else
//        max1 = numbers[1], max2 = numbers[0];
//
//    for (int i = 2; i < n; ++i) {
//        if (numbers[i] >= max1) {
//            max2 = max1;
//            max1 = numbers[i];
//        }
//        else if (max2 <= numbers[i])
//            max2 = numbers[i];
//    }
//
//    cout << max1 + max2;

    /** Reverse in place **/

//    int n, numbers[200];
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        cin >> numbers[i];
//        cout << numbers[i] << " ";
//    }
//    cout << endl;
//
//    for (int i = 0; i < n / 2; ++i) {
//        int temp = numbers[i];
//        numbers[i] = numbers[n - i - 1];
//        numbers[n - i - 1] = temp;
//
//    }
//
//    for (int i = 0; i < n; ++i) {
//        cout << numbers[i] << " ";
//    }

    /** find the most frequent number

        1- using 2 arrays
    **/

//    int n, numbers[200], repeated[151] {0};
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        cin >> numbers[i];
//        repeated[numbers[i]]++;
//    }
//
//    int maximum = repeated[0], maximum_index = 0;
//
//    for (int i = 1; i < 151; ++i)
//        if (maximum < repeated[i]) {
//            maximum = repeated[i];
//            maximum_index = i;
//        }
//
//    cout << maximum_index;

    /** 2- using nested loops **/

//    int n, numbers[200];
//    cin >> n;
//
//    for (int i = 0; i < n; ++i)
//        cin >> numbers[i];
//
//    int max_value = -1, max_repeat = -1;
//
//    for (int i = 0; i < n; ++i) {
//
//        int repeat = 0;
//        for (int j = 0; j < n; ++j) {
//            repeat += numbers[i] == numbers[j];
//
//            if (max_repeat = -1 || max_repeat < repeat)
//                max_repeat = repeat, max_value = numbers[i];
//        }
//    }
//
//    cout << max_value << ' ' << max_repeat;

    //isIncreasingArray();
    //replaceMinMax();
    //uniqueNumbersOfOrderedList();
    //isPalindrome();
    //smallestPair();
    //lowestThree();
    searchForANumber();
    //digitsFrequency();
    //uniqueNumbersOfUnorderedList();
    //sortingNumbers();
    return 0;
}
