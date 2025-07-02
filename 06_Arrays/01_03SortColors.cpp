#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
//Arr={1 , 2 , 2 ,0 , 0 , 1 , 2}
//Answer={0 , 0 ,1 , 1 , 2 ,2 ,2}
        vector<int> sortColors(vector<int>& nums) {
            vector<int>tem;
         int countzero=0;
         int countone=0;
         for (int i = 0; i < nums.size(); i++)
         {
            if(nums[i]==0){
                countzero++;
            }
            else if(nums[i]==1){
                countone++;
            }
         }
         int counttwo=nums.size()-countzero-countone;
         for (int i = 0; i < countzero; i++)
         {
            tem.push_back(0);
         }
         for (int i = 0; i < countone; i++)
         {
            tem.push_back(1);
         }
         for (int i = 0; i < counttwo; i++)
         {
            tem.push_back(2);
         }
         nums=tem;
         return nums;
        }
int main(){
    vector<int>arr={2 , 2 , 0 , 1 , 1 , 0 , 2 ,1};
    sortColors(arr);
    for (int i = 0; i < sortColors(arr).size(); i++)
    {
        cout << sortColors(arr)[i] << " ";
    }
return 0;
}