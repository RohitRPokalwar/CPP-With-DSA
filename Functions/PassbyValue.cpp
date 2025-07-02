#include <iostream>
using namespace std;
void swapx(int a, int b)
{
    cout << "Inside Void Function" << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}
int main()
{
    int a = 4, b = 5;
    swapx(a, b);
    cout << "Inside Main Function" << endl;
    cout << a << " " << b << endl;
    return 0;
}