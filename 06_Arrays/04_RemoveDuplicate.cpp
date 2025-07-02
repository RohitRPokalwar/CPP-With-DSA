// By Two Pointers
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n)
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            arr[j + 1] = arr[i];
            j++;
        }
    }
    return j + 1;
};
int main()
{
    int arr[5] = {1, 1, 2, 2, 3};
    cout << removeDuplicates(arr, 5);
    return 0;
}