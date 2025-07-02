#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter No. Of Elements" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i << endl;
        cin >> arr[i];
    }
    // Using Hash
    // Precompute
    int m = 13; // In this case we use m as 13
    // But max value of m in main function is pow(10,6)
    // Gobally Declare as int hashh[m] it will be m=pow(10,7)
    int hash[m] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
        // hash[arr[i]]++;
    }
    // Test cases taking
    int t;
    cin >> t;
    while (t--)
    {
        int target;
        cout << "Target No ";
        cin >> target;
        cout << "It came " << hash[target] << endl;
    }
    return 0;
}