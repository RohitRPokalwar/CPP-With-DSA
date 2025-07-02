#include <iostream>
#include <utility> // For std::swap
#include <cstring> // For strlen
using namespace std;

void StringPalindrome(char str1[], int i, int n)
{
    if (i >= n / 2)
        return;

    swap(str1[i], str1[n - i - 1]);

    StringPalindrome(str1, i + 1, n);
}

int main()
{
    char str1[100];
    cin >> str1;

    int n = strlen(str1);

    StringPalindrome(str1, 0, n);

    cout << "Reversed string: " << str1 << endl;

    return 0;
}
