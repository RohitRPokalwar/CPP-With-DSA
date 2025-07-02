#include <iostream>
using namespace std;
// Brute Force
// int CountOnes(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int num = arr[i];
//         int count = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[j] == num)
//             {
//                 count++;
//             }
//         }
//         if (count == 1)
//             return num;
//     }
// }
// OPTIMAL SOLUTION
int CountOnes(int arr[], int size)
{
    int m = 0;
    for (int i = 0; i < size; i++)
    {
        m = m ^ arr[i];
    }
    return m;
}
int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    cout << CountOnes(arr, 9);
    return 0;
}