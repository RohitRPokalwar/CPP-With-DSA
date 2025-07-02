#include <iostream>
using namespace std;
int fib(int n)
{
    if (n <= 1)
        return n;
    int last = fib(n - 2);
    int slast = fib(n - 1);
    return slast + last;
}
/*int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    if (n == 3)
        return 2;
    return fib(n - 1) + fib(n - 2);
}*/
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}