#include <iostream>
#include <math.h>
using namespace std;
int main(){
//Check Wheteher it is power of True
int n;
cin>>n;
bool isbool=false;
for (int i = 1; i <=32  ;i++)
{
    int a=(pow(2, i));
    if (a==n)
    {
        isbool=true;
    }
    
}
if (isbool==true)
{
    cout<<"It is Power of 2"<<endl;
}
else{
    cout<<"It is not Power of 2"<<endl;
}
return 0;
}