#include <bits/stdc++.h>
using namespace std;
// void MergeSortedArray(int arr1[], int arr2[], int m, int n, int arr3[], int q)
// {
//     q = m + n;
//     for (int i = 0; i < m; i++)
//     {
//         arr3[i] = arr1[i];
//     }
//     for (int j = 0; j < n; j++)
//     {
//         arr3[m + j] = arr2[j];
//     }
// }
void MergeSortedArray(int arr1[], int arr2[], int m, int n, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr3[k++] = arr2[j++];
    }
}
int main()
{
    int arr1[3] = {1, 3, 5};
    int arr2[3] = {2, 4, 6};
    int arr3[6];
    // MergeSortedArray(arr1, arr2, 3, 3, arr3, 6);
    // sort(arr3, arr3 + 6);
    MergeSortedArray(arr1, arr2, 3, 3, arr3);
    for (int i = 0; i < 6; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}