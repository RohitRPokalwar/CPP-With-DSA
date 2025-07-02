#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int a=0;
int b =1;
cout<<a<<" "<<b<<" ";
for (int i = 0; i <n-2; i++)
{
    int nextnumber=a+b;
    cout<<nextnumber<<" ";
    a=b;
    b=nextnumber;
}

return 0;
}