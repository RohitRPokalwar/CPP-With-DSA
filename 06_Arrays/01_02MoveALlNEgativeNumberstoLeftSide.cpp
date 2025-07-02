#include <iostream>
#include<vector>
using namespace std;
int main(){
    // 8 9 -4 7 -5 6
    //Answer -4 -5 
    vector<int> tem={1 , -4 , 54 , 5 , 8 -2 , -7};
    int low=0;
    int high =tem.size()-1;
   while(low<high){
        if(tem[low]<0) low++;
        else if(tem[high]>0)  high--;
        else{
            swap(tem[low] , tem[high]);
        }
    }
    for (int i = 0; i < tem.size(); i++)
    {
        cout<<tem[i]<<" ";
    }
    
    
return 0;
}