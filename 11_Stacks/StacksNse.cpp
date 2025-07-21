#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
void NextSmaller(int arr[])
{
    // Using Stack : pop, ans, push
    // TC O(n) SC O(n)
    int n = 6;
    int ans[n];
    ans[n - 1] = n;
    stack<int> st;
    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() > 0 && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            ans[i] = n;
        else
            ans[i] = st.top();
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
void PrevSmaller(int arr[])
{
    // Using Stack : pop, ans, push
    // TC O(n) SC O(n)
    int n = 6;
    int ans[n];
    ans[0] = -1;
    stack<int> st;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (st.size() > 0 && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[6] = {2, 1, 5, 6, 2, 3};
    NextSmaller(arr);
    cout << endl;
    PrevSmaller(arr);
    return 0;
}