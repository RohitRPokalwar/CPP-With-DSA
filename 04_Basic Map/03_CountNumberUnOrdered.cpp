#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Elements" << endl;
    cin >> n;
    int arr[n];
    // We can do precompute already
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) // O(1) or O(n)
    {
        cout << "Enter Element No " << i << endl;
        cin >> arr[i];
        mpp[arr[i]]++; // O(n)
    }
    // Time Complexity //O(n) or O(n2)
    //  precompute
    //  We use hash[n] max n value in main function pow(10,6) for high power
    //  Use map for high numbers like pow(10 , 8)
    //  map<int, int> mpp;
    //  for (int i = 0; i < n; i++)
    //  {
    //      mpp[arr[i]]++;
    //  }
    //  It mpp will be Store in Sort
    //  We can see by Iterate
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    int t; // Testcases at a time Run
    cin >> t;
    while (t--)
    {
        int target;
        cin >> target;
        cout << mpp[target] << endl;
    }

    return 0;
}