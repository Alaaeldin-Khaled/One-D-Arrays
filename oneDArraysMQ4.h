#include <iostream>
using namespace std;
/**
 * Prints the frequency of digits of numbers in an array
 */
void digitsFrequency()
{
    int n, digits[10] {0};
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        while (num)
        {
            ++digits[num % 10];
            num /= 10;
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << i << " " << digits[i] << endl;
    }
}
