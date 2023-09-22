#include <iostream>
using namespace std;
/**
 * Replaces maximum integer with minimum integer and vice versa
 */

void replaceMinMax() {

    int n, nums[200];
    cin >> n;

    int min_num = 2000, max_num = 0;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        if (min_num > nums[i])
            min_num = nums[i];

        if (max_num < nums[i])
            max_num = nums[i];
    }

    for (int i = 0; i < n; ++i) {
        if (nums[i] == min_num)
            nums[i] = max_num;
        else if (nums[i] == max_num)
            nums[i] = min_num;
    }

    for (int i = 0; i < n; ++i) {
        cout << nums[i] << " ";
    }
}
