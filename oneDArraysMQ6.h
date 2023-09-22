#include <iostream>
using namespace std;
/**
 * Sorting an array
 */
void sortingNumbers()
{
    int n, num[200];
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (num[j] < num[i])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
                j = i;
            }
        }
    }

    for (int i = 0; i < n; ++i)
        cout << num[i] << " ";
}
