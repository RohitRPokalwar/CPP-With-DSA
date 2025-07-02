#include <iostream>
#include<vector>
using namespace std;
void PrintArray(vector<int>arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}
void UnionofTwoArrays(vector<int>arr , vector<int>brr){
    vector<int> tem(arr.size()+brr.size());
    for(int i=0 ; i<arr.size() ; i++){
        tem[i]=arr[i];
    }
    for(int j=0 ; j<=brr.size() ; j++){
        tem[j+arr.size()]=brr[j];
    }
   PrintArray(tem);
}
vector<int> UnionofTwoArraysbyVector(vector<int>arr , vector<int>brr){
    vector<int> tem(arr.size()+brr.size());
    for(int i=0 ; i<arr.size() ; i++){
        tem.push_back(arr[i]);
    }
    for(int j=0 ; j<=brr.size() ; j++){
       
        tem.push_back(brr[j]);
    }
  return tem;
}
int main(){
    vector<int>arr={1 , 2 , 4 ,6};
    vector<int>brr={7 , 8 , 9 , 3};
    UnionofTwoArrays(arr , brr);
return 0;
}