#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
/* Method 1*/
// int i=1;
// while (i<=n)
// {
//     int j=n;
//     while (j>0)
//     {
//         cout<<j<<" ";
//         j--;
//     }
//     cout<<endl;
//     i++;
// }
/*Method 2*/
int i=1;
while (i<=n)
{
    int j=1;
    while (j<=n)
    {
        cout<<n-j+1<<"  ";
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}