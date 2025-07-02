#include <iostream>
#include <math.h>
using namespace std;
// With One
void ArrayReverse(int i, int n, int arr[])
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    ArrayReverse(i + 1, n, arr);
}
// With Parameter
/*void ArrayReverse(int l, int r, int arr[])
{
    if (l >= r)
        return;
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    return ArrayReverse(l + 1, r - 1, arr);
}*/
int main()
{
    int n = 6;
    // cin>>n;
    int arr[] = {2, 5, 4, 7, 9, 1};
    ArrayReverse(0, n, arr);
    cout << arr[3];
    return 0;
}