#include <iostream>
#include <cmath>
// Add #include <cmath> to hve i*i<n can be in i<sqrt(n)
using namespace std;
// bool checkprime(int n)
// {
//     if (n == 1)
//         return false;
//     for (int i = 2; i <= n - 1; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
bool checkprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) // Use Sqrt function to optimize
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    cout << checkprime(n);
    return 0;
}