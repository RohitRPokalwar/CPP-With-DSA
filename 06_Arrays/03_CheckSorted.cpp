#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // 2 4 3 5 6
    //  1 2 2 3 4
    bool Check = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            Check = false;
            break;
        }
    }
    if (Check)
    {
        cout << "Array is Sorted";
    }
    else
    {
        cout << "Array is not Sorted";
    }
    return 0;
}