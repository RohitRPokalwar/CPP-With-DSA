#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int ans=0;
while (n!=0)
{
   
    
    int dig=n%10;
    n=n/10;
    ans=ans*10+dig;  // Condition for Reverse
     if ((ans>INT16_MAX/10) || (ans<INT16_MIN/10))
    {
        return 0;
    }
}
cout<<ans;
return 0;
}