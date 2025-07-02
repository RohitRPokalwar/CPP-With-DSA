#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool CanMakeEqual(vector <string> &s){
    unordered_map<char , int> um;
   for ( auto str : s){
    for(auto ch : str){
        um[ch]++;
    }
   }
   int n=s.size();
   for(auto i : um){
        if(i.second%n!=0){
            return false;
        }
   }
return 1;
}
int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    cout<< (CanMakeEqual(v)  ? "Yes" : "No");
return 0;
}