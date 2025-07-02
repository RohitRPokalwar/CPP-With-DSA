#include <iostream>
#include <limits.h>
using namespace std;
//Row Sum
void RowSum(int arr[][3] , int rows , int column){
   
    for (int i = 0; i < rows; i++)
    {
        int sum=0;
        for (int j = 0; j < column; j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
// COLUMN Sum
void ColumnSum(int arr[][3] , int rows , int column){
   
    for (int i = 0; i < rows; i++)
    {
        int sum=0;
        for (int j = 0; j < column; j++)
        {
            sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
//KEy Searching
void SearchKey(int arr[][3] , int rows , int column , int key){
   
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if(arr[i][j]==key){
                    cout<<"True"<<endl;
                    return;
                }
            }
            
        }
        cout<<"False"<<endl;
    }
//MAX Print
int MaxPrint(int arr[][3] , int rows , int column){
   int maxi=INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
           if(arr[i][j]>=maxi) {
                maxi=arr[i][j];
           }
        }
        
    }
    return maxi;
}
//MIN Print
int MinPrint(int arr[][3] , int rows , int column){
    int min=INT_MAX;
     for (int i = 0; i < rows; i++)
     {
         for (int j = 0; j < column; j++)
         {
            if(arr[i][j]<=min) {
                 min=arr[i][j];
            }
         }
         
     }
     return min;
 }
 //Transpose of Matrix
 void TransposePrint(int arr[][3] , int rows , int column , int transpose[3][3]){
 for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
           transpose[j][i]=arr[i][j];
        }
    }
}
int main(){
    //2D Array 
    int arr[15][16];
    //Declaration and Intialization of Array
    int arr1[3][3]={{2,4,5} , {2,8,9} , {7,9,10}};
    //Acessing the values of Array
    cout<<arr1[0][2]<<endl;
    //Storing the values of 2D Array to 1D Array USE FORMULA 
    //(Total Columns*i)+j  arr1[0][2]  i=0 ; j=2  //Answer 2
    //Taking values row wise
    int rows=3;
    int column=4;
    int arr2[rows][column];
    /*for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr2[i][j];
        }
    }*/
    //Print Row wise 
    /* for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }*/
    //For column wise interchange rows and column in cin and cout 
    //cin>>arr2[j][i]  cout<<arr2[j][i]
    //Print ROW SUM
    cout<<"Row Sum"<<endl;
     RowSum(arr1 , 3 , 3);
     cout<<"Coulmn Sum"<<endl;
    ColumnSum(arr1 , 3 , 3);
    cout<<"Key "<<endl;
    SearchKey(arr1 , 3  , 3 , 1100);
    cout<<"Max Print"<<endl;
    cout<<MaxPrint(arr1 , 3 , 3)<<endl;
    cout<<"Min Print"<<endl;
    cout<<MinPrint(arr1 , 3 , 3)<<endl;
    cout<<"Transpose Print"<<endl;
    int arr3[3][3];
    TransposePrint(arr1 , 3 ,3 ,arr3 );
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}