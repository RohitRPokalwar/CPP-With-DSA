#include <iostream>
#include <math.h>
using namespace std;
// 371= 3*3*3 + 7*7*7 + 1*1*1

int digits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

bool checkArmstrong(int n)
{
    int On = n;
    int sum = 0;
    int numDigits = digits(n);
    while (n != 0)
    {
        int d = n % 10;
        n = n / 10;
        sum += pow(d, numDigits);
    }
    return On == sum;
}

int main()
{
    int n = 1634;
    cout << checkArmstrong(n);
    return 0;
}