#include <iostream>
using namespace std;
//Q.4 1 2 3 4 5 6 7 8
//Answer -->  1 8 2 7 3 6 4 5
void ExtremeDigit(int arr[] , int size){
    int m=0;
    int n=size-1;
    while(m<n){
        cout<<arr[m]<<" ";
        cout<<arr[n]<<" ";
        m++;
        n--; 
        if (m == n) {
            cout << arr[m];
        }
    }
}
int main(){
    int arr[]={1 , 2 ,  3 , 4 , 5 ,6 , 7 , 8 ,9};
    int n=sizeof(arr)/sizeof(int);
    ExtremeDigit(arr , n);
return 0;
}