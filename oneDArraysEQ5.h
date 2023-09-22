#include <iostream>
using namespace std;

/**
 * finds the minimum value of A[i] + A[j] + j - i, where 0 <= i < j <= N
 */

 void smallestPair()
 {
     int n, nums[200];
     cin >> n;

     for (int i = 0; i < n; ++i)
     {
         cin >> nums[i];
     }

     int res = nums[1] + nums[2] + 2 - 1;

     for (int i = 0; i < n; ++i)
     {
         for (int j = i + 1; j < n; ++j)
         {
             if ((nums[i] + nums[j] + j - i) < res)
                res = nums[i] + nums[j] + j - i;
         }
     }
     cout << res;
 }
