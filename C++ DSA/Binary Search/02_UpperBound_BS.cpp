#include <iostream>
using namespace std;
int UpperBound(int arr[], int size, int target)
{
    int s = 0, e = size - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > target)
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
    cout << "Answer is " << UpperBound(arr, n, k);

    return 0;
}