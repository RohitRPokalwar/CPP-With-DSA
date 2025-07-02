// Print N to 1
// Time Complexity O(n)
// Space Complexity O(n)
#include <iostream>
using namespace std;
void Print(int n, int i)
{
    if (i == 0)
        return;
    cout << i << " ";
    Print(n, i - 1);
}
int main()
{
    int n;
    cin >> n;
    Print(n, n);
    return 0;
}