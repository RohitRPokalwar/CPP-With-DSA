/*Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.*/
#include <iostream>
#include <vector>
using namespace std;
/*Brute Force
    1.Sort
    2.for (int i = 0; i < size; i++)
    {
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    for(int i=size-2 ; i>=0 ; i--){
        if(ans!=arr[i]) {
            m=arr[i];
            break;
        }
    }*/
//Better Solution 
/*int ans=arr[0];
//First find largest Element then Use this 
    for(int i = size-2; i >=size; i--)
    {
        if(arr[i]!=largest){
            Slargest=arr[i];
            break;
        }
    }*/
//Optimal Solution
int SecondLargest(int arr[] , int size){
    int largest=arr[0] , SLargest=-1;
    for (int i = 0; i <size; i++)
    {
        if(arr[i]>largest){
            SLargest=largest;
            largest=arr[i];
        }
        else if (arr[i]<largest && arr[i]>SLargest)
        {
            SLargest=arr[i];
        }
    }
    return SLargest;
}
int SecondSmallest(int arr[] , int size){
    int smallest=INT16_MAX , Ssmallest=arr[0];
    for (int i = 0; i <size; i++)
    {
        if(arr[i]<smallest){
            Ssmallest=smallest;
            smallest=arr[i];
        }
        else if (arr[i]!=smallest && arr[i]<Ssmallest)
        {
            Ssmallest=arr[i];
        }
    }
    return Ssmallest;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Elements " << i << endl;
        cin >> arr[i];
    }
    cout<<"Answer is "<<SecondLargest(arr , n)<<endl;
    cout<<"Answer is "<<SecondSmallest(arr , n)<<endl;
    return 0;
}