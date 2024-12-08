#include <iostream>
using namespace std;
int TimeRotated(int arr[] , int size){
    int s=0, e=size-1;
    int index=-1;
    int ans=INT_FAST16_MAX;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[s]<=arr[mid]){
            if(arr[s]<ans){
                index = s;
                ans=arr[s];
            }
            s=mid+1;
        }
        else
        { 
            if (arr[mid]<ans)
            {
                index=mid;
                ans=arr[mid];
            }
            e=mid-1;
        }
        
    }
    return index;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cout<<"Element "<<i<<" ";
        cin>>arr[i];
    }
    cout<<"Answer is "<<TimeRotated(arr , n);
return 0;
}