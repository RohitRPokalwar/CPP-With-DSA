#include <iostream>
using namespace std;
int MinimumSearch(int arr[] , int size){
    int s=0, e=size-1;
    int ans=INT_FAST16_MAX;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[s]<=arr[mid]){
            ans=min(ans , arr[s]);
            s=mid+1;
        }
        else
        {
            ans=min(ans , arr[mid]);
            e=mid-1;
        }
        
    }
    return ans;
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
    cout<<"Answer is "<< MinimumSearch(arr , n);
return 0;
}