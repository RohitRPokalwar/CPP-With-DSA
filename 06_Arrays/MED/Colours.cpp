#include <iostream>
using namespace std;
// TIME COMPLEXITY O(N)
/*
void Movezeroonetwos(int arr[], int size)
{
    int count0 = 0;
    int count1 = 1;
    int count2 = 2;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else if (arr[i] == 2)
        {
            count2++;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count0 + count1; i < count0 + count1 + count2; i++)
    {
        arr[i] = 2;
    }
}
    */
// OPTIMAL SOLUTION
// DNF ALGORITHM
void Movezeroonetwos(int arr[], int size)
{
    int mid = 0, low = 0, high = size - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[] = {1, 0, 0, 0, 2, 2, 1, 1, 0, 0, 2};
    Movezeroonetwos(arr, 11);
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}