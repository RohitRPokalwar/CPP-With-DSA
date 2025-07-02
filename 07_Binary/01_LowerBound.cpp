#include <iostream>
#include <vector>
using namespace std;

// Function to find the Lower Bound of a target in a sorted array
int LowerBound(vector<int> &arr, int k)
{
    int s = 0, e = arr.size() - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= k)
        { // Possible lower bound found
            ans = mid;
            e = mid - 1; // Move left to find the first occurrence
        }
        else
        {
            s = mid + 1; // Move right
        }
    }
    return ans; // Returns the index where arr[i] >= k
}

int main()
{
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    int result = LowerBound(arr, target);

    if (result != -1)
    {
        cout << "Lower Bound of " << target << " is at index: " << result << endl;
    }
    else
    {
        cout << "No element greater than or equal to " << target << " found." << endl;
    }

    return 0;
}
