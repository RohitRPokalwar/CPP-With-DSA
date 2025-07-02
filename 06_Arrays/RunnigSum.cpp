#include <iostream>
#include <vector>
using namespace std;
/*Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].*/
vector<int>runningsum(vector<int>arr){
    vector<int>temp;
    int sum=0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum+=arr[i];
        temp.push_back(sum);
    }
    return temp;
}
int main(){
    vector<int>arr{1 , 2 , 3 , 4};
 
return 0;
}