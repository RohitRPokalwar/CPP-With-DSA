#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void StockSpan(int arr[])
{
    int n = 8;
    stack<int> st;
    int ans[8];
    ans[0] = 1;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (st.size() > 0 && arr[st.top()] <= arr[i])
            st.pop();
        if (st.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top();
        }
        st.push(i);
        ans[i] = i - ans[i];
    }
    for (int i = 0; i < n; i++)
    {

        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[8] = {100, 80, 60, 81, 70, 60, 75, 85};
    StockSpan(arr);
    return 0;
}