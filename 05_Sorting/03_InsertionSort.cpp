#include <iostream>
using namespace std;
void Insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}
// Time Complexity O(n2)  Worst Average
// O(n) Best

int main()
{
    int n;
    cout << "Enter Elements" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)

    {
        cin >> arr[i];
    }
    Insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}