#include <iostream>
#include <stack>
#include <string>
#include <bits/stdc++.h>
using namespace std;
void display(stack<char> &st)
{
    stack<char> gt;
    while (st.size() > 0)
    {
        gt.push(st.top());
        st.pop();
    }
    while (gt.size() > 0)
    {
        cout << gt.top();
        st.push(gt.top());
        gt.pop();
    }
}
/*METHOD 1  */
void validst(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else
        {
            if (s[i] == st.top())
                i++;
            else
            {
                st.push(s[i]);
            }
        }
    }
    display(st);
}
/*METHOD 2 */
string validst1(string s)
{
    stack<char> st;
    st.push(s[0]);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != st.top())
            st.push(s[i]);
    }
    s = "";
    while (st.size() > 0)
    {
        s += st.top();
        st.pop();
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    string s = "aaabbaacd";
    cout << validst1(s);
    return 0;
}