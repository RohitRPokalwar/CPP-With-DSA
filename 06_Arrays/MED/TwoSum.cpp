#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* BRUTE FORCE */
/*
int twoSum(int arr[], int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << arr[i] << j << arr[j];
                return true;
            }
        }
    }
    return 0;
}
*/
/*BETTER SOLUTION*/
int twoSum(int arr[], int size, int k)
{
}
int main()
{
    int arr[] = {1, 32, 34, 80};
    cout << twoSum(arr, 4, 33);
    return 0;
}