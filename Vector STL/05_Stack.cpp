#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>s;
    //It has push, emplace , top, pop,size, empty ,swap
    //It is LIFO last in First out
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"Top Element "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;
    cout<<"Stack size is "<<s.size()<<endl;
    //Printing Stack
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
return 0;
}