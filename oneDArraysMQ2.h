#include <iostream>
using namespace std;

/**
 *
 */

void searchForANumber()
{
//    int n, nums[200];
//    cin >> n;
//
//    for (int i = 0; i < n; ++i)
//        cin >> nums[i];
//
//    int q;
//    cin >> q;
//
//    for (int i = 0; i < q; ++i)
//    {
//        int num;
//        cin >> num;
//
//        int num_index = -1;
//        for (int j = 0; j < n; ++j)
//        {
//            if (nums[j] == num)
//                num_index = j;
//        }
//        cout << num_index << endl;
//    }

    const int N = 500 + 1;
	int n, q, x, ans[N];

	for (int i = 0; i < N; i++)
		ans[i] = -1; /** at first the answer of any number is -1 **/

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		ans[x] = i;/** update the answer for x to be i **/
	}
	int num;
	cin >> q;
	while (q--) {
		cin >> num;
		cout << ans[num] << endl;
	}
}
