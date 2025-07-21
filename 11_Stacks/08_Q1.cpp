#include <iostream>
#include <stack>
using namespace std;
bool IsBalanced(string s)
{
    if (s.length() % 2 != 0)
        return false;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.size() == 0)
                return false;
            else
                st.pop();
        }
    }
    if (st.size() == 0)
        return true;
    else
        return false;
}
int main()
{
    string s = "()(())()";
    cout << IsBalanced(s);
    return 0;
}