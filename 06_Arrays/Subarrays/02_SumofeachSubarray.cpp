#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();
    // Calculate sum of each subarray
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            cout << "Sum of subarray from elements " << arr[i] << " to " << arr[j] << " is: " << sum << endl;
        }
    }
    return 0;
}