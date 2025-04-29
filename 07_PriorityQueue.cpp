#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> q;
    q.push(5);
    q.push(3);
    q.push(10);
     //It has push, emplace , top , pop,size, empty ,swap
      //Printing Stack
    while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop(); //pop stsrts from front
    } 
    cout<<"Using above staement we do increasing order"<<endl;
    priority_queue<int , vector<int >, greater<int>>q1;
    q1.push(5);
    q1.push(3);
    q1.push(10);
    while(!q1.empty()){
        cout<<q1.top()<<endl;
        q1.pop(); 
    }
    
return 0;
}