#include <iostream>
using namespace std;

/**
 * checks if array is palindrome or not
 */

void isPalindrome()
{
    int n, nums[1000];
    bool palindrome = true;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] != nums[n - i - 1])
        {
            palindrome = false;
            break;
        }
    }
    cout << palindrome;
}
