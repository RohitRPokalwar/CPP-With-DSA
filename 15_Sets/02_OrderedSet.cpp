#include <iostream>
#include <set>
#include <map>
using namespace std;
int main()
{
    set<int> a;
    a.insert(5);
    a.insert(3);
    a.insert(6);
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    map<string, int> mp;
    mp["A"] = 50;
    mp["Rohit"] = 60;
    mp["Y"] = 40;
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}