#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
/*Method 1*/
// int count=1;

// while (i<=n)
// {
//     int j=1;
//     int value=i;
//     while (j<=i)
//     {
       
//         cout<<value<<" ";
//         value++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
/*Method 2*/
while (i<=n)
{
    int j=i;
    while (j< i*2)
    {
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}