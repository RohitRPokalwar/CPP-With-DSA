#include <iostream>
using namespace std;
int main()
{
    int n = 7499;
    int count = 0;
    int ReverseNumber = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        ReverseNumber = ReverseNumber * 10 + lastdigit;
    }
    cout << ReverseNumber;
    return 0;
}