#include <iostream>
using namespace std;

void rearrangeArray(int arr[], int size)
{
    int temp[size]; // Correctly initialize the temp array
    int pos = 0, neg = 0;

    // Separate positive and negative elements
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            temp[pos++] = arr[i]; // Store positives first
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            temp[pos++] = arr[i]; // Append negatives
    }

    // Copy back to original array
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {1, -2, -3, 8, 4, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    rearrangeArray(arr, size);

    // Print the modified array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
