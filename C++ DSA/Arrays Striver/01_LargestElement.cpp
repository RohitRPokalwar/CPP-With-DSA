/*Input: arr = [1, 8, 7, 56, 90]
Output: 90
Explanation: The largest element of the given array is 90.*/
#include <iostream>
using namespace std;
/*Brute Force
  1.Sort the Array 
  2.cout<<arr[size-1]*/

//Optimal Solution
int LargestElement(int arr[] , int size){
    int ans=arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Elements " << i << endl;
        cin >> arr[i];
    }
    cout<<"Answer is "<<LargestElement(arr , n);
return 0;
}