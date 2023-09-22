#include <iostream>
using namespace std;

/**
 * Prints unique numbers in an unordered list
 */

void uniqueNumbersOfUnorderedList()
{
    int n, nums[200], freq[200] {-1};
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
        bool unique = true;
        for (int j = 0; j < n; ++j)
        {
            if (nums[i] == freq[j])
            {
                unique = false;
                break;
            }
        }
        if (unique)
        {
            freq[i] = nums[i];
            cout << nums[i] << " ";
        }
    }
}
