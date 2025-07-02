/*Problem statement
You are given an array 'arr' sorted in non-decreasing order and a number 'x'. You must return the index of the lower bound of 'x'.
Note:
1. For a sorted array 'arr', 'lower_bound' of a number 'x' is defined as the smallest index 'idx' such that the value 'arr[idx]' is not less than 'x'.If all numbers are smaller than 'x', then 'n' should be the 'lower_bound' of 'x', where 'n' is the size of array.
2. Try to do this in O(log(n)).*/
#include <iostream>
using namespace std;
int LowerBound(int arr[], int size, int target)
{
    int s = 0, e = size - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= target)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int k;
    cout << "Element";
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Elements " << i << endl;
        cin >> arr[i];
    }
    cout << "Answer is " << LowerBound(arr, n, k);
    return 0;
}