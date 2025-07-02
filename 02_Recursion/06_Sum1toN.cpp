#include <iostream>
using namespace std;
// Function Form
int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + Sum(n - 1);
}
/*void Sum(int i, int sum)
{
    if (i < 1)
        cout << sum;
    return;
    Sum(i - 1, sum + i);
}*/
int main()
{
    int n;
    cin >> n;
    cout << Sum(n);
    return 0;
}