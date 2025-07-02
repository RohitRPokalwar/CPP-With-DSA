#include <iostream>
using namespace std;
bool CheckPalindrome(char ch[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        if (ch[s] != ch[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char ch[] = {'a', 'b', 'c', 'd', 'c', 'b', 'a'};
    cout << CheckPalindrome(ch, 7);
    return 0;
}