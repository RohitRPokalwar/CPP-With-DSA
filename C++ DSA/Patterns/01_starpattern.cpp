#include <iostream>
using namespace std;
int main(){
int n ;
cin>>n;
//              Using For Loop
// for (int i = 1; i<=n; i++)
// {
//     for (int j = 1; j <=n; j++)
//     {
//         cout<<" * ";
//     }
//     cout<<endl;
// }
int i = 1;
//For column we use i
    while(i<=n) {
        //For Row we use j
        int j = 1;
        while(j<=n) {
            cout<< "*";
            j = j+1; 
        }
        cout<<endl;

        i = i+1;
    } 
return 0;
}