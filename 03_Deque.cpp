#include <iostream>
#include <deque>
using namespace std;
//deque have Random access
int main(){
    deque<int>l;
    l.push_back(3);
    l.push_front(4);
    l.push_front(8);
    l.push_front(9);
    for(int va : l){
        cout<<va<<" ";
    }
    cout<<endl;
    l.pop_back();
    l.pop_front();
    for(int va : l){
        cout<<va<<" ";
    }
    cout<<endl;
    cout<<l[1]; // It can acess Random
return 0;
}