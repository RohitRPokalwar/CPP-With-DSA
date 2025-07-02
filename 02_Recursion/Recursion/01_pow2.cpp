#include <iostream>
using namespace std;
//Inpunt n 
//Output 2 ki power n using Recursion
int poweroftwo(int n){
    //Base Case
    if(n==0){
       return 1;
    } 
    //Recursive Relation
    return 2* poweroftwo(n-1);
}
int main(){
    cout<<poweroftwo(6);
return 0;
}