#include <iostream>
using namespace std;
/**
 * Prints unique numbers of a sorted array
 */
void uniqueNumbersOfOrderedList()
{
    int n, temp;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;

        if (num != temp)
        {
            cout << num << " ";
            temp = num;
        }
        temp = num;
    }

}
