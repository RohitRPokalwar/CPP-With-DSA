#include <iostream>
using namespace std;
int facto(int n)
{
//     if (n == 0 || n == 1)
//         return 1;
//     return n * fact(n - 1);
int fact=1;
for (int i = 1; i <=n; i++)
{
    
    fact*=i;
    cout<<fact<<endl;
}
return fact;
}
int main()
{
    int n;
    cin >> n;
    cout << facto(n);
    return 0;
}