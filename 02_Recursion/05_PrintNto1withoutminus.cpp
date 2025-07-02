#include <iostream>
using namespace std;

void Print(int n, int i)
{
    if (i > n)
        return;
    cout << n - i + 1 << " "; // Reverse Order Formula
    Print(n, i + 1);
}
int main()
{
    int n;
    cin >> n;
    Print(n, 1);
    return 0;
}
