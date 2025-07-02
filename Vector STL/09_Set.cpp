#include <iostream>
#include<set>
using namespace std;
int main(){
    set<int>l;
   l.insert(1);
   l.insert(2);
   l.insert(3);
   l.insert(1);
   l.insert(2);
   l.insert(3);
   for(auto li : l){
    cout<<li<<" ";
   }
  
return 0;
}