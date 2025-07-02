#include <iostream>
#include <vector>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

bool BloomDay1(vector<int> &arr, int day, int m, int k) // Fixed return type to bool
{
    int count = 0, nob = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= day)
        {
            count++;
            if (count == k)
            {
                nob++;
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    return nob >= m;
}

int bloomdaycheck(vector<int> &arr, int m, int k)
{
    int n = arr.size();
    if (n < m * k)
        return -1; // Not enough flowers

    int mini = *min_element(arr.begin(), arr.end()); // Optimized minimum calculation
    int maxi = *max_element(arr.begin(), arr.end()); // Optimized maximum calculation

    int s = mini, e = maxi, ans = e;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (BloomDay1(arr, mid, m, k))
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
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    cout << bloomdaycheck(arr, 2, 3);
    return 0;
}
