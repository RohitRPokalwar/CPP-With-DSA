#include <iostream>
using namespace std;
//Count 0 and 1
void Count(int arr[] , int size){
    int countzero=0;
    int countone=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0){
            countzero++;
        }
        if(arr[i]==1){
            countone++;
        }
    }
    cout<<"Count of zero is "<<countzero<<endl;
    cout<<"Count of one is "<<countone<<endl;
}
int main(){
    int arr[]={0 , 0 , 1 , 2 , 0 , 1 , 5 , 0 , 1 , 1};
    int n=sizeof(arr)/sizeof(int);
    Count(arr , n);
return 0;
}