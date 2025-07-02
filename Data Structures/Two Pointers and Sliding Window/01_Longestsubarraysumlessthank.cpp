 #include <iostream>
 #include<bits/stdc++.h>
 using namespace std;
 int largestsumofsubarray(vector<int> &arr , int k){
    int maxlen=0;
    for(int i=0 ; i<arr.size()-1 ; i++){
        int sum=0;
        for(int j=i ; j<arr.size()-1 ; j++){
                sum=sum+arr[i];
                if(sum<=k){
                 
                 maxlen=  max(maxlen , j-i+1);
                }
                else if(sum>k) break;
        }
    }
    return maxlen;
 }
 int main(){
    vector<int> arr={2 , 5 , 1 , 7 ,10};
    cout<<largestsumofsubarray(arr , 14);
 return 0;
 }