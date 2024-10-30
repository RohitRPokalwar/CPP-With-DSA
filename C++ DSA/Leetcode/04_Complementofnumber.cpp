#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cin>>n;
int ans1=0;
int i=1;
int dig1;
while (n!=0)
{
    dig1=n%2;
    n=n/2;
    ans1=ans1+(dig1*i);
    i=i*10;
}
cout<<ans1;
cout<<~5;

return 0;
}