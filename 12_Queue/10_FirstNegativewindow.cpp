#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    int arr[] = {3, -4, -7, 30, 7, -9, 2, 1, 6, -1};
    vector<int> ans;
    queue<int> q;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 0)
            q.push(i);
    }
    int i = 0;
    int k;
    cin >> k;
    int n = sizeof(arr) / sizeof(int);
    while (i + k <= n)
    {
        while (q.size() > 0 && q.front() < i)
            q.pop();
        if (q.size() == 0 || q.front() >= i + k)
            ans.push_back(0);
        else
            ans.push_back(arr[q.front()]);
        i++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}