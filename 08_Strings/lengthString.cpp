#include <iostream>
using namespace std;
// WITH SHARING SIZE
/*int lengthString(char arr[], int n)
{
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != '\0')
        {
            len++;
        }
    }
    return len;
}*/
// WITHOUT SHARING SIZE
int lengthString(char ch[])
{
    int len = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    // cout << lengthString(arr, 7);
    cout << lengthString(arr);
    return 0;
}