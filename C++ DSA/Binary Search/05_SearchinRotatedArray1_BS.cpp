#include <iostream>
using namespace std;
int Search(int nums[], int size, int target)
{
    int s = 0, e = size - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid]==target)
        {
            return mid;
        }
        //Left Sorted
        else if (nums[s] <= nums[mid])
        {
            if (nums[s]<=target && target<=nums[mid])
            {
                e=mid-1;
            }
            else s=mid+1;
            
        }
        //Right Sorted
        else
        {
            if (nums[mid]<=target && target<=nums[e])
            {
                s=mid+1;
            }
            else e=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int k;
    cout << "Element";
    cin >> k;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Elements " << i << endl;
        cin >> nums[i];
    }
    cout << "Answer is " << Search(nums, n, k);

    return 0;
}