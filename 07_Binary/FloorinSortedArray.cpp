#include <iostream>
#include <bits/stdc++.h>
/*Input: arr[] = [1, 2, 8, 10, 11, 12, 19], k = 0
Output: -1
Explanation: No element less than 0 is found. So output is -1.*/
using namespace std;
int findFloor(vector<int> &arr, int target)
{
    int size = arr.size();
    int start = 0, end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
            // ans = mid;
        }
        else
        {
            end = mid - 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 5, 6, 8};
    cout << findFloor(arr, 7);
    return 0;
}