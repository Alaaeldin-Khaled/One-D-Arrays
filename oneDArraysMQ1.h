#include <iostream>
using namespace std;

/**
 * Find the 3 minimum values
 */

void lowestThree()
{
    int n;
    cin >> n;
    int num[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> num[i];
    }

    int min1 = num[0], min2 = num[1], min3 = num[2];
    for (int i = 0; i < n; ++i)
    {
        if (num[i] < min1)
        {
            //min3 = min2;
            min2 = min1;
            min1 = num[i];
        }
        else if (min2 > num[i])
        {
            min3 = min2;
            min2 = num[i];
        }
        else if (min3 > num[i])
        {
            min3 = num[i];
        }
    }

    cout << min1 << " " << min2 << " " << min3;
}
