#include <iostream>
using namespace std;
//Lower Bound
int LowerBound(int arr[], int size, int target)
{
    int s = 0, e = size - 1;
    int a = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= target)
        {
            a = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return a;
}
//Upper Bound
int UpperBound(int arr[], int size, int target)
{
    int s = 0, e = size - 1;
    int b = size;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > target)
        {
            b = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return b;
}
int main(){
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
    if (LowerBound(arr, n, k)==-1)
    {
        return -1;
    }
    cout << "First occurrence " << LowerBound(arr, n, k)<<endl;
    cout << "Last occurrence " << UpperBound(arr, n, k)-1<<endl;
return 0;
}