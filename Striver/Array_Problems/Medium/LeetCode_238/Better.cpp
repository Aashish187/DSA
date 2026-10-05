/*
time complexity :O(N+N+N)
space complexity :O(N) FOR LEFT AND RIGHT ARRAYS
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    vector<int> left(n, 1);
    vector<int> right(n, 1);
    for (int i = 1; i < n; i++)
    {
        left[i] = left[i - 1] * nums[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] * nums[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        ans[i] = left[i] * right[i];
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans = productExceptSelf(nums);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
        if (i != n - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}