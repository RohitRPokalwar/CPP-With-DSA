#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int SumofDiv(vector<int> &piles, int div)
{
    int sum = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        sum += ceil((double)(piles[i]) / double(div));
    }
    return sum;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    int n = piles.size();
    int s = 1;
    int e = n;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        // We Nedd Ceil Value so ans=mid
        if (SumofDiv(piles, mid) >= h)
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
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << minEatingSpeed(arr, 5);
    return 0;
}