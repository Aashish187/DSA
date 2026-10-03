/*
time complexity :O(N*N)
space complexity :O(1) not considering the ans space if considering it is O(N)
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    int index = 0;
    while (index < n)
    {
        int product = 1;
        for (int i = 0; i < n; i++)
        {
            if (i == index)
            {
                continue;
            }
            else
            {
                product *= nums[i];
            }
        }
        ans.push_back(product);
        index++;
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