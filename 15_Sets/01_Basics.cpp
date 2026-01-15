#include <iostream>
#include <unordered_set>

using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.erase(2);
    s.insert(4);
    s.erase(4);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    // Find the target element
    int target = 1;
    if (s.find(target) != s.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}