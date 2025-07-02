#include <iostream>
using namespace std;
// Time Complexity: O(n)
// Space Complexity: O(d)+O(n-d)+O(d)=O(n+d)
// BRUTE FORCE OR BETTER SOLUTION
int main()
{
    int n;
    cin >> n;
    int d;
    cout << "Enter the number of places to rotate: ";
    cin >> d;
    d = d % n;
    if (d == 0)
    {
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Shifting
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// OPTIMAL SOLUTION
/*#include <bits/stdc++.h>
using namespace std;
// reverse(int arr[] , int start , int end){
// while (start < end)
// {
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     start++;
//     end--;
// }
// }

void leftRotate(int arr[], int n, int d) {

    if (n == 0) return;

    // Get the effective number of rotations:
    d = d % n;

    //step 1:
    reverse(arr, arr + d);

    //step 2:
    reverse(arr + d, arr + n);

    //step 3:
    reverse(arr, arr + n);
}

int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;

    cout << "Before rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    leftRotate(arr, n, d);
    cout << "After rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}*/