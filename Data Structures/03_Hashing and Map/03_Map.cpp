#include <iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
//Sum of Repetitive Element
//int n=7
//  1 1 2 1 3 3 3
//Answer [1+3]=4
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    map<int ,int>m;
    for(int i=0 ; i<n ; i++){
        m[arr[i]]++;
    }
    //For each Loop
    int sum=0;
    for(auto i : m){
        if(i.second>1){ 
            sum+=i.first;
        }

    }
    cout<<sum;
return 0;
}