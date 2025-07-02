#include <iostream>
#include<map>
using namespace std;
//It takes order of key
//Key must be unique
/*If key is same then it takes the key same and value of next
 key -> 123
 value -> "ABC"
 key -> 123 
 value -> "Rohit"
 the valuy will be updated as Rohit
*/
int main(){
    map<string , int> um;
    um.insert(make_pair( "Rohit",124));
    um["ABC"]=123;
    um.insert(make_pair( "SQPP" , 120));
    //Printing the Map
    for(auto i : um){
        cout<<i.first<<" "<<i.second<<endl;
    }
return 0;
}