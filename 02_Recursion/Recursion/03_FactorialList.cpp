#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0) return 1;
    int m = n * fact(n - 1);
    cout<<m<< " ";
   return m;
}
int main()
{
    int n;
    cin >> n;
    fact(n);
    return 0;
}