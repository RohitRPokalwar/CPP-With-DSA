#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
void PrevGreater(int arr[])
{
    // Using Stack : pop, ans, push
    // TC O(n) SC O(n)
    int n = 8;
    int ans[n];
    ans[0] = -1;
    stack<int> st;
    st.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        while (st.size() > 0 && st.top() <= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();
        st.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[8] = {3, 1, 2, 5, 4, 6, 2, 3};
    PrevGreater(arr);
    return 0;
}