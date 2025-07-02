#include <iostream>
using namespace std;
void print(int n){
    //Base Case
    if(n==0) return;
    //Processing
    cout<<n<<" ";
    //Recursive Case
    print(n-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
return 0;
}