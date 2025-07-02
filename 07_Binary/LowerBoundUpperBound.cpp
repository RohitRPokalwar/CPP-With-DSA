#include <iostream>
#include <vector>
using namespace std;
/*34. Find First and Last Position of Element in Sorted
Array*/
/*Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]*/
int LowerBound(vector<int> &arr, int k)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int ans1 = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (k <= arr[mid])
        {
            ans1 = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans1;
}

int HigherBound(vector<int> &arr, int k)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int ans1 = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (k >= arr[mid])
        {
            ans1 = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans1;
}

vector<int> searchRange(vector<int> &arr, int target)
{
    int m = LowerBound(arr, target);
    int n = HigherBound(arr, target);
    if (m == -1 || arr[m] != target)
    {
        return {-1, -1}; // Target not found
    }
    return {m, n};
}

int main()
{
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target value: ";
    cin >> target;
    vector<int> result = searchRange(arr, target);
    cout << "Lower Bound: " << result[0] << ", Higher Bound: " << result[1] << endl;
    return 0;
}
