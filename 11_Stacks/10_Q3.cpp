#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
void NextGreater(int arr[])
{
    // Using Stack : pop, ans, push
    // TC O(n) SC O(n)
    int n = 8;
    int ans[n];
    ans[n - 1] = -1;
    stack<int> st;
    st.push(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
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
void NextGreaterarr(int arr[])
{
    int agg[8];

    for (int i = 0; i < 8; i++)
    {
        agg[i] = -1;
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[j] > arr[i])
            {
                agg[i] = arr[j];
                break;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << agg[i] << " ";
    }
}
int main()
{
    int arr[8] = {73, 74, 75, 71, 69, 72, 76, 73};
    NextGreater(arr);
    return 0;
}