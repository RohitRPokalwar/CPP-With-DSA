#include <iostream>
#include <map>
using namespace std;
int main(){
    multimap<string , int> mm;
    mm.insert(make_pair("ABC" , 14586564));
    mm.insert(make_pair("Rohit" , 1458656454));
    mm.insert(make_pair("ABC" , 14586564));
for(auto i : mm){
    cout<<i.first <<" "<<i.second<<endl;
}
return 0;
}