#include <iostream>
#include<vector>
using namespace std;
class MinHeap{
    public :
    // int arr[50];
    vector<int>arr;
   int idx;
    MinHeap(int x){
     idx=1;
     vector<int>a(x);
     arr=a;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        
        idx++;
        while(i!=1){
            int parent=i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i] , arr[parent]);
            }
            else break;
            i=parent;
        }
        
    }
    int size(){
            return idx-1;
        }
    void pop(){
        idx--;
        arr[1]=arr[idx];
        int i=1;
        while(true){
            int left=2*i;
            int right=2*i+1;
            if(left>idx-1) break;
            if(right>idx-1){
                 if(arr[i]>arr[left]){
                swap(arr[i] , arr[left]);
                i=left;
                break;
                }
                else break;
            }
            if(arr[left]<arr[right]){
                if(arr[i]>arr[left]){
                swap(arr[i] , arr[left]);
                i=left;
                }
            }
            else{
                if(arr[i]>arr[right]){
                swap(arr[i] , right);
                i=right;
                }
            }
        }   
    }
};
int main(int argc, char const *argv[])
{
    MinHeap mp(5);
    mp.push(4);
    mp.push(5);
    cout<<mp.size()<<endl;
    mp.push(8);
    mp.push(2);
    mp.push(3);
    cout<<mp.size()<<endl;
    cout<<mp.top()<<endl;
    mp.pop();
    cout<<mp.top()<<endl;
    cout<<mp.size()<<endl;
    return 0;
}
