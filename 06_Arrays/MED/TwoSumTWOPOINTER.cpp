#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// USING SORTING
vector<int> twoSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int s = 0;
    int e = nums.size() - 1;
    while (s < e)
    {
        if (nums[s] + nums[e] == target)
        {
            return {s, e};
        }
        else if (nums[s] + nums[e] < target)
        {
            s++;
        }
        else
            e--;
    }
    return {};
}
int main()
{
    vector<int> arr = {1, 2, 5, 8, 9};
    twoSum(arr, 8);

    return 0;
}