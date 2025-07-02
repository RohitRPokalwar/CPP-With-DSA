#include <iostream>
using namespace std;
int main(){
    for(int i=0 ; i< arr.size() ; i++){
        for(int j=0 ; j<arr.size() ; j++){
            for(int k=0 ; k<arr.size() ; k++){
                if(arr[i]%2!=0 && arr[j]%2!=0 && arr[k]%2!=0){
                    return true;
                }
            }
        }
    }
return 0;
}