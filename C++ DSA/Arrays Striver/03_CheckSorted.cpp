/*Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].*/
#include <iostream>
using namespace std;
bool CheckSort(int arr[] , int size){
 bool Check=true;
 for (int i = 0; i < size; i++){
 if (arr[i+1]>=arr[i])
 {
 }
 else{
    Check=false;
 }
 }
 return Check;
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
    cout<<"Answer is "<<CheckSort(arr , n);
return 0;
}