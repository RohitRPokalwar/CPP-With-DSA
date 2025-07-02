//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string compareNM(int n, int m){
        if(m<n) {
            cout<<"greater";
            
        }
        else if(n<m){
            cout<<"lesser";
        }
        else if (m==n){
            cout<<"equal";
        }
    }
};

//{ Driver Code Starts.

int main() {
   
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    
cout << "~" << "\n";

    return 0;
}
// } Driver Code Ends