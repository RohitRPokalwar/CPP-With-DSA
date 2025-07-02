#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // Print karo space 1st Triangle
        int space=n-i;
        while (space)
        {
            cout<<" ";
            space--; //space=space-1
        }
        //Print karo 2nd Triangle
        int j=1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        //Print karo 3rd Triangle
        int start=i-1;
        while (start)
        {
            cout<<start;
            start--;
        }
        
        cout<<endl;
        i++;
    }
return 0;
}