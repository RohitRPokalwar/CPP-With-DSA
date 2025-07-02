#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool Canweplace(vector<int> &arr, int dist, int cows)
{
    int n = arr.size();
    int cowcount = 1;
    int last = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - last >= dist)
        {
            cowcount++;
            last = arr[i];
        }
    }
    if (cowcount >= cows)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*Time Complexity O(max-min)*O(n)*/
/*
int AgressCo(vector<int> &arr, int cows)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr[n] - arr[0]; i++)
    {
        if (Canweplace(arr, i, cows) == true)
        {
            continue;
        }
        else
        {
            return i - 1;
        }
    }
}
    */
int AgressCo(vector<int> &arr, int cows)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int s = 0;
    int e = arr[n - 1] - arr[0];
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (Canweplace(arr, mid, cows))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {0, 3, 4, 7, 9, 10};
    cout << AgressCo(arr, 4);
    return 0;
}