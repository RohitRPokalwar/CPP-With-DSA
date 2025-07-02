
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void printNos(int n, int i = 1)
    {
        if (i > n)
            return;
        cout << i << " ";
        printNos(n, i + 1);
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;

        cin >> N;
        Solution ob;

        ob.printNos(N);
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
