#include <iostream>
using namespace std;
void Uppertolowercase(char ch[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] - 'A' + 'a';
        }
    }
}
int main()
{
    char ch[] = "HII I AM A STUdeNT";
    Uppertolowercase(ch, 18);
    for (int i = 0; i < 18; i++)
    {
        cout << ch[i];
    }

    return 0;
}