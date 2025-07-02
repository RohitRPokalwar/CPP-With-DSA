#include <iostream>
#include <vector>
using namespace std;
int UniqueElement(vector<int> arr ){
    int ans=0;  // Zero initialised as zero xor sai farak nahi padega
    //0^0 = 0 and 0^1=1
    for (int i = 0; i < arr.size(); i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    vector<int>arr{1 , 2 , 1 , 4  , 4};
    int n=arr.size();
cout<<UniqueElement(arr);
return 0;
}