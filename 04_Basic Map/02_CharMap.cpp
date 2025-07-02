#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    // Create a map for characters in the string
    map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--)
    {
        char target;
        cout << "Enter target character: ";
        cin >> target;

        if (mpp.find(target) != mpp.end())
        {
            cout << "Frequency of '" << target << "' is: " << mpp[target] << endl;
        }
        else
        {
            cout << "'" << target << "' is not present in the string." << endl;
        }
    }

    return 0;
}
