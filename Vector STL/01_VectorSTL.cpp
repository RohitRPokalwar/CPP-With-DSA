#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //Declaration of vector
    vector <int> vec;
    vector <int> vec2(10 , 0);
    //Initialisiazation of values in vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(8);
    vec.push_back(9);
    //If want to remove last element
    vec.pop_back();
    //OUTPUT vector
    //FORICH LOOP
    for(int val :  vec){
        cout<<val<<" ";
    }
    cout<<endl;
    for(int val :  vec2){
        cout<<val<<" ";
    }
    cout<<endl;
    //To print vector element  
    cout<<"Value at index 2 is "<<vec[2]<<" or "<< vec.at(2)<<endl;
    //To print first or back elemnt of vector
    cout<<"Value at index 1 is "<<vec.front()<<" Last element is "<< vec.back()<<endl;
    //To remove Element given range of index
    vec2.erase(vec2.begin()+2 , vec2.begin()+3);
    for(int val2 :  vec2){
        cout<<val2<<" ";
    }
    cout<<endl;
    //To Insert Element given range of index
    vec2.insert(vec2.begin()+2 ,100);

    for(int val2 :  vec2){
        cout<<val2<<" ";
    }
    cout<<endl;
    //Iterator
    vector<int>::iterator it;
    vector<int>vec3={1 , 2 , 3 , 4};
    for ( it =vec3.begin(); it!=vec3.end() ; it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //For Reverse Iterator use reverse iterator
  //Use of auto to not write  vector<int>::reverse_iterator ite;
    for ( auto ite =vec3.rbegin(); ite!=vec3.rend() ; ite++)
    {
        cout<<*(ite)<<" "; 
    }
    cout<<endl;
    //LIST
    
return 0;
}