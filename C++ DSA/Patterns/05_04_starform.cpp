#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
       cout<<char((i-j+1)+64)<<" ";
        j++;
    } 
    cout<<endl;
    i++;
}
return 0;
}