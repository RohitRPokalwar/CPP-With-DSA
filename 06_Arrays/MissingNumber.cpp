#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum1 = (n + 1) * (n + 2) / 2; // Adjust formula for missing number in 1 to n+1
    int sum2 = accumulate(nums.begin(), nums.end(), 0);
    return sum1 - sum2;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 9}; // Convert array to vector
    cout << missingNumber(arr) << endl;
    return 0;
}
