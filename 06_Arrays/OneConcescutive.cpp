#include <iostream>
using namespace std;
int MaxConsecutive(int arr[], int size)
{
    int count = 0;
    int maxi = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1};
    cout << MaxConsecutive(arr, 6);
    return 0;
}