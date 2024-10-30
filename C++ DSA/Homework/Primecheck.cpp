#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of "<< endl;
cin>>n;
for (int i = 2; i <n; i++)
{
    if (n%i==0)
    {
        cout<<"It is not Prime"<<endl;
        break;
    }
    else if (n==0 && n==1)
    {
        cout<<"It is neither Prime nor Composite";
    }
    else 
    {   cout<<"It is Prime "; 
        break;
    }
}
return 0;
}