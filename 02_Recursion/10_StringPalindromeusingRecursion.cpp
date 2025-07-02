#include <iostream>
using namespace std;
char StringPalindrome(char str1[], int i, int n)
{
    if (i >= n / 2)
        return true;
    if (str1[i] != str1[n - i - 1])
        return false;
    return StringPalindrome(str1, i + 1, n);
}
int main()
{
    char str1[] = "MADAM";
    if (StringPalindrome(str1, 0, 5))
        cout << "TRUE";
    else
        cout << "FALSE";
    return 0;
}