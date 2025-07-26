#include <iostream>
#include <cmath>
// Add #include <cmath> to hve i*i<n can be in i<sqrt(n)
using namespace std;
// void printFactors(int n)
// {
//     for (int i = 1; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//             if (i != sqrt(n))
//                 cout << n / i << " ";
//         }
//     }
// }
void printFactors(int n)
{
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    for (int i = sqrt(n); i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << n / i << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    printFactors(n);
    return 0;
}