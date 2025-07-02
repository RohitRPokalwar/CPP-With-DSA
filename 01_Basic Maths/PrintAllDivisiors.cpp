#include <iostream>
using namespace std;
void printdivisiors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum;
}
int main()
{
    int n = 36;
    printdivisiors(n);
    return 0;
}