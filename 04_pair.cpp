#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , int>p={5 , 4};
    cout<<p.first;
    cout<<p.second;
//Nested like pair
pair<int , pair<int , int>>p1={1 , {2 , 3}};
cout<<p1.first;
cout<<p1.second.first;
cout<<endl;
//Vector with pair
vector<pair <int , int>> vec2={{1 , 2} , {3 , 4}};
vec2.push_back({4,5}) ;// IT must be in pair
vec2.emplace_back(2 , 8);
for(auto val : vec2){
    cout<<val.first<<" "<<val.second<<endl;
}
return 0;
}