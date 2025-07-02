#include <iostream>
using namespace std;
int main()
{
    // For loop

    string sh;
    cout << "Enter String ";
    cin >> sh;
    int t;
    cout << "How much times ";
    cin >> t;
    int n = 'z';
    // PreCompute
    int hash[n] = {0};
    for (int i = 0; i < sh.size(); i++)
    {
        hash[sh[i]] += 1;
    }
    while (t--)
    {
        char ch;
        cout << "Write char " << t - t + 1 << endl;
        cin >> ch;
        cout << "In String there are " << hash[ch] << endl;
    }

    return 0;
}