#include <iostream>
using namespace std;
bool possiblesol(int arr[] ,int size ,int m, int mid){
    int StudentCount=1;
    int pageSum=0;
     for (int i = 0; i < size; i++)
    {
        if(pageSum+arr[i]<=mid){
            pageSum=pageSum+arr[i];
        }
        else{
            StudentCount++;
            if (StudentCount>m||arr[i]>mid)
            {
                return false;
            }
            pageSum=arr[i];
            
        }
    }

    return true;
}
int Bookallocate(int arr[] , int size , int m){
    int s=0 , e;
    int sum=0;
    int ans=-1;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    
    e=sum;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
       if (possiblesol(arr , size , m, mid))
       {
            ans=mid;
            e=mid-1;
       }
       else
       {
        s=mid+1;
       }
       mid=s+(e-s)/2;
        
    }
    return ans;
    
}
int main(){
    int arr[5]={1, 2,2, 3, 1};
    cout<<"Answer is "<<Bookallocate(arr , 5 , 3);
return 0;
}