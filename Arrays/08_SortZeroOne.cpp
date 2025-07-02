#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void PrintArray(vector<int>arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}
void SortArrayzeroandOne(vector<int>arr){
    vector<int>tem;
    for (int i = 0; i < arr.size(); i++)
    {
        int count=0;
        if (arr[i]==0)
        {
            count++;
            tem.push_back(arr[i]);
        }
        else if (arr[i]==1)
        {
            tem.push_back(arr[i]);
        }
        
    }
    for (int i = 0; i < tem.size(); i++)
    {
        cout<<tem[i]<<" ";  
    }
    
}
int main(){
    vector<int>arr={0 , 0 , 1 , 1 , 0 , 1 ,0};
    cout<<"Hello"<<endl;
    SortArrayzeroandOne(arr);
return 0;
}