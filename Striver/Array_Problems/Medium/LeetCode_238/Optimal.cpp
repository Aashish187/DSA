/*
time complexity :O(N+N)
space complexity :O(1)
General Pattern : When each answer depends on everything before and everything after an index, think PREFIX + SUFFIX.
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    long long rightp = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] *= rightp;
        rightp *= nums[i];
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