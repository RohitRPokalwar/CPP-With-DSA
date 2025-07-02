#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int prod = 1;
int sum=0;
while (n!=0)
{
    int digit=n%10;
    prod=prod*digit;
    sum=sum+digit;
    n=n/10;
}
int Answer = prod-sum;
cout<<Answer<<endl;
cout<<prod<<endl;
cout<<sum<<endl;

return 0;
}