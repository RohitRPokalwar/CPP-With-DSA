#include <iostream>
using namespace std;
int peak(int arr[] , int size){
    if(size==1) return 0;
    if (arr[0]>arr[1])
    {
        return 0;
    }
    if (arr[size-1]>arr[size-2])
    {
        return size-1;
    }
    int s=1 , e=size-2;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if (arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid]>arr[mid-1]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
    //Method 2 
    /*int findPeak(int arr[], int size) {
    int start = 0, end = size - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid + 1]) {
            end = mid; // Peak is in the left half
        } else {
            start = mid + 1; // Peak is in the right half
        }
    }
    return start; // Start and end converge to the peak index
}*/
}
int main(){
    int arr[4]={1 , 2 , 3 , 1};
    cout<<"Answer is "<<peak(arr , 4);
return 0;
}