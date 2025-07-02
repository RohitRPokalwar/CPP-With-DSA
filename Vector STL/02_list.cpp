#include <iostream>
#include<list>
using namespace std;
//List cannot have Random Access
int main(){
    list<int> l;
    l.push_back(3);
    l.push_front(4);
    l.push_front(8);
    l.push_front(9);
    for(int va : l){
        cout<<va<<" ";
    }
    l.pop_back();
    l.pop_front();
    for(int va : l){
        cout<<va<<" ";
    }
    // cout<<l[0]; //It cannot have random access
return 0;
}