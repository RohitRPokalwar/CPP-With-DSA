#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    /* Using For LOOP */
    /*for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    */
    int i = 1;
        //For Row we use i
        while(i<=n) {
        //For Column we use j
        int j = 1;
        while(j<=n) {
            cout<<i;
            j = j+1; 
        }
        cout<<endl;

        i = i+1;
    } 
return 0;
}