#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,3,3,8,5,2};
    int size=sizeof(arr)/sizeof(int);
    int sum=0;
    for (int i = 0; i < size; i++)
    {
            sum+=arr[i]*(pow(10,size-i-1));
    }
    cout<<sum;
return 0;
}