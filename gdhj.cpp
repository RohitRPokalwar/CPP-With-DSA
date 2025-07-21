#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int res1 = a + b + c;
    int m = a + (b * c);
    int n = a * (b + c);
    int r = a * b * c;
    int p = (a + b) * c;
    int res2 = (a * b) + c;
    vector<int> arr;
    arr.push_back(m);
    arr.push_back(n);
    arr.push_back(r);
    arr.push_back(p);
    arr.push_back(res1);
    arr.push_back(res2);
    sort(arr.begin(), arr.end());
    cout << arr[5];
    return 0;
}
