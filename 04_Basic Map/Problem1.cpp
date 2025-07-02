/*Example 1:
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.

Example 2:

Input: array[] = {2,2,3,4,4,2};
Output: 2 3
Explanation: The frequency of 2 is 3, i.e. the highest and the frequency of 3 is 1 i.e. the lowest.*/
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int maxFreq = 0, minFreq = INT_MAX;
    int elementWithMaxFreq = -1, elementWithMinFreq = -1;

    for (auto it : mpp)
    {
        int element = it.first;
        int freq = it.second;

        if (freq > maxFreq)
        {
            maxFreq = freq;
            elementWithMaxFreq = element;
        }

        if (freq < minFreq)
        {
            minFreq = freq;
            elementWithMinFreq = element;
        }
    }
    cout << elementWithMaxFreq << " " << elementWithMinFreq;
    return 0;
}
