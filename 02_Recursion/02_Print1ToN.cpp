// Print 1 to N
// Time Complexity O(n)
// Space Complexity O(n)
#include <iostream>
using namespace std;
void Print(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    Print(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    Print(1, n);
    return 0;
}