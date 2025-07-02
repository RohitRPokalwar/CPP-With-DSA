#include <iostream>
using namespace std;
void ReverseString(char ch[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        swap(ch[s], ch[e]);
        s++;
        e--;
    }
}
int main()
{
    char ch[] = "the sky is blue";
    ReverseString(ch, 14);
    for (int i = 0; i < 14; i++)
    {
        cout << ch[i] << " ";
    }
    return 0;
}