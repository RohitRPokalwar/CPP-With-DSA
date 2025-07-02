#include <iostream>
using namespace std;
// void RotateArray(int arr[], int size, int k)
// {
//     int temp[size];
//     for (int i = 0; i < size; i++)
//     {
//         temp[(i + k) % size] = arr[i];
//     }
//     arr = temp;
// }
int main()
{
    int k;
    cin >> k;
    int arr[] = {1, 1, 2, 4, 5, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    // RotateArray(arr, n, k);
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}