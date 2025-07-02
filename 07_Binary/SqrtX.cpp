#include <bits/stdc++.h>
using namespace std;
/*It is Correct Code for Small values Wrong for values like 2147483647*/

int sqrt(int m, int x)
{
    vector<int> ans;
    if (x == 0 || x == 1)
        return x;
    for (int j = 0; j <= x; j++)
    {

        // ans[i]=i*i;
        ans.push_back(pow(j, m));
        if (ans[j] == x)
        {
            return j;
        }
    }
    return -1;
}
int main()
{
    int m;
    cin >> m;
    int x;
    cin >> x;
    cout << sqrt(m, x);
    return 0;
}