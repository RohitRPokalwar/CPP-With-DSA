#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void find_flower_indices(int n, int t, std::vector<int>& arr, int result[2]) {
    sort(arr.begin() , arr.end());
    for(int i=0 ; i<arr.size() ; i++){
        for(int j =i+1; j<arr.size() ; j++){
            if(arr[i]+arr[j]==t){
               result[0]=i;
               result[1]=j;
               break;
            }
        }
    }
}

int main() {
    int n, t;
    std::cin >> n >> t;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int result[2];
    find_flower_indices(n, t, arr, result);
    std::cout << result[0] << " " << result[1];
    return 0;
}