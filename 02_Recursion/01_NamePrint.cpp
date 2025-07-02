// Print Name N times
// Time Complexity O(n)
// Space Complexity O(n)
#include <iostream>
using namespace std;
void Name(int i, int n)
{
    if (i > n)
        return;
    cout << "Rohit" << endl;
    Name(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    Name(1, n);
    return 0;
}