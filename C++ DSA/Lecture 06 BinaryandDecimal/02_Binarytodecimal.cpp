#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=0;
int ans=0;
while (n!=0)
{
    int dig=n%2;
    ans=(dig*pow(10 , i++)) + ans;
    n=n>>1;
}
cout<<ans;
return 0;
}