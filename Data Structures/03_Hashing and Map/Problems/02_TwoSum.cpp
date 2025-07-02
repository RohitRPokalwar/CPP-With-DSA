#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> targetSumindex(vector<int> &v , int k){
    unordered_map<int , int>m;
    vector<int>ans(2);
 for (int i = 0; i < v.size(); i++)
 {
    if(m.find(k-v[i])!=m.end()){
    ans[0]=
    }
 }
 
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
for (int i = 0; i < n; i++)
{
    cin>>v[i];
}
int targetSum;
cin>>targetSum;
vector<int> ans= targetSumindex(v , targetSum);
cout<<ans[0]<<" "<<ans[1];
return 0;
}