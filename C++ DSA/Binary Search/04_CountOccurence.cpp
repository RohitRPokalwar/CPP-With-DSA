#include <iostream>
#include <vector>
#include <algorithm>  // for sort
using namespace std;

int search(vector<int> &arr, int size, int target)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
            return mid;  // Found target
        else if (target > arr[mid])
            s = mid + 1;  // Search the right half
        else
            e = mid - 1;  // Search the left half
    }
    return -1;  // Not found
}

int LowerBound(vector<int> &arr, int size, int target)
{
    int s = 0, e = size - 1;
    int a = -1;  // Store the position of the lower bound
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= target)
        {
            a = mid;  // Potential lower bound found
            e = mid - 1;  // Look in the left half
        }
        else
        {
            s = mid + 1;  // Look in the right half
        }
    }
    return a;
}

int UpperBound(vector<int> &arr, int size, int target)
{
    int s = 0, e = size - 1;
    int b = size;  // Store the position of the upper bound
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > target)
        {
            b = mid;  // Potential upper bound found
            e = mid - 1;  // Look in the left half
        }
        else
        {
            s = mid + 1;  // Look in the right half
        }
    }
    return b;
}

// Using First and Last Occurrence
vector<int> searchRange(vector<int> &arr, int target)
{
    int k = search(arr, arr.size(), target);
    if (k != -1)
    {
        int m = LowerBound(arr, arr.size(), target);
        int n = UpperBound(arr, arr.size(), target) - 1;  // Last occurrence
        return {m, n};  // Return first and last indices
    }
    return {-1, -1};  // Target not found
}

int countFreq(vector<int>& arr, int target) {
    vector<int> ans = searchRange(arr, target);
    if (ans[0] == -1) return 0;  // If the element isn't found, frequency is 0
    return ans[1] - ans[0] + 1;  // Frequency is the difference between last and first occurrence
}

int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    arr.resize(n);  // Resize the vector to the correct size
    
    int k;
    cout << "Enter the element to find frequency of: ";
    cin >> k;
    
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];  // Input each element into the vector
    }

    // Sort the array before applying binary search
    sort(arr.begin(), arr.end());

    cout << "Frequency of " << k << " is: " << countFreq(arr, k) << endl;
    
    return 0;
}
