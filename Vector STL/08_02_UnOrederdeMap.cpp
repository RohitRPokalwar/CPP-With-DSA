#include <iostream>
#include<unordered_map>
using namespace std;
//List cannot have Random Access
int main(){
    unordered_map<string ,int> l;
    l.emplace("bottles" , 140);
    l.emplace("b" , 28);
    l.emplace("m" , 14);
    l.emplace("c" , 128);
   for(auto li : l){
    cout<<li.first<<" "<<li.second<<endl;
   }
return 0;
}