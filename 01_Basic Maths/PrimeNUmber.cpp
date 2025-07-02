#include <iostream>
using namespace std;
int primeNum(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != 0)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        return true;
    }
    return false;
}
// int PrimNum(int n)
// {
//     int count = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 2)
//     {
//         return true;
//     }

//     return false;
// }
//  Time Complexity O(n)
// For Min time complexity
/*bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
*/
int main()
{
    int n;
    cin >> n;
    cout << primeNum(n);
    return 0;
}