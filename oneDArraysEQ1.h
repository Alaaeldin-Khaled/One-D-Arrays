#include <iostream>
using namespace std;
/**
 * Checks if array is increasing
 */
void isIncreasingArray() {
    int n, numbers[200];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    bool increasing = true;

    for (int i = 1; i < n; ++i) {
        if (numbers[i] >= numbers[i - 1])
            continue;
        else {
            increasing = false;
            break;
        }
    }

    cout << increasing;
}
