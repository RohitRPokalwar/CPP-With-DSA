#include <iostream>
#include<vector>
using namespace std;
int main(){
    //Declaring  a 2D Vector
    vector< vector<int >>arr;
    vector<int>a{1 , 4 , 5};
    vector<int>b{5 , 8 , 9};
    vector<int>c{4 , 8 , 10};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    //Print 2D Vector
    int rows=arr.size();
    int column=arr[0].size();  //But no of Rows Different raha toh ye nahi aayega
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Form 2D vector with Diffrent Method
    int row=3;
    int col=4;
    vector < vector<int>>arr1(row , vector<int>(col , 0));
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1[i].size(); j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}