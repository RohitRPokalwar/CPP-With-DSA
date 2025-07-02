// Print 1 to N
// Time Complexity O(n)
// Space Complexity O(n)
#include <iostream>
using namespace std;
void Print(int i, int n)
{
    if (i < 1)
        return;
    Print(i - 1, n);
    cout << i << " ";
}
int main()
{
    int n;
    cin >> n;
    Print(n, n);
    return 0;
}