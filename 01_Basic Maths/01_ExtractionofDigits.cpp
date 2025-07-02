#include <iostream>
using namespace std;
int main()
{
    int n = 4459;
    int count = 0;
    // Printing Digits
    // For Extracting Digits Remove Count variable
    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        count++;
    }
    cout << count;
    return 0;
}