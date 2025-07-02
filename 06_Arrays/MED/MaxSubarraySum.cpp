//   *KADANES ALGORITHM* //

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// BRUTE FORCE
/*
int maxSubArray(vector<int>& nums) {
    int n=nums.size();
    int maxi=INT_MIN;
for(int i=0 ; i<n ; i++){
    for(int j=i ; j<n ; j++){
        int sum=0;
        for(int k=i  ; k<=j ; k++){
            sum+=nums[k];
            maxi=max(sum , maxi);
        }
    }
}
return maxi;
} */
// BETTER SOLUTION
// int maxSubArray(vector<int> &nums)
// {
//     int n = nums.size();
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += nums[j];
//             maxi = max(sum, maxi);
//         }
//         return maxi;
//     }
// }
// OPTIMAL SOLUTION
int maxSubArray(vector<int> &nums)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {2, 4, 5, 5, 65, 5, 5, 8};
    cout << maxSubArray(arr);
    return 0;
}