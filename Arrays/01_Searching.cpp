#include <iostream>
using namespace std;
//Linear Search
bool LinearSearchArray(int arr[] , int size , int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={1 , 2 , 3 , 4 , 8};
cout<<LinearSearchArray(arr , 5 , 2);
return 0;
}