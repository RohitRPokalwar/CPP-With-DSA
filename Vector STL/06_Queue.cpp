#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
     //It has push, emplace , front , pop,size, empty ,swap
      //Printing Stack
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop(); //pop stsrts from front
    } 
return 0;
}