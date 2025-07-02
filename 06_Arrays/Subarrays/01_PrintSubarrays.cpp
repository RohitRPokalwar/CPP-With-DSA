#include <iostream>
#include <vector>
using namespace std;
void printAllSubarrays(vector<int> &arr)
{
    int n = arr.size();
    for (int start = 0; start < n; ++start)
    {
        for (int end = start; end < n; ++end)
        {
            // Print subarray from start to end
            for (int i = start; i <= end; ++i)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Print Subarrays
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    vector<int> arr1 = {1, 2, 3, 4};
    printAllSubarrays(arr1);
    return 0;
}