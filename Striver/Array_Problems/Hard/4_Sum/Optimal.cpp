/*
TIME COMPLEXITY : O(N**3)
SPACE COMPLEXITY : O(1)
*/
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findQuadruples(vector<int> arr, int n, int target)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (j > i+1 && arr[j] == arr[j - 1])
            {
                continue;
            }
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                long long sum = (long long) arr[i] + arr[j] + arr[k] + arr[l];
                if (sum == target)
                {
                    ans.push_back({arr[i], arr[j], arr[k], arr[l]});
                    k++;
                    l--;
                    while (k < l && arr[k] == arr[k - 1])
                    {
                        k++;
                    }
                    while (k < l && arr[l] == arr[l + 1])
                    {
                        l--;
                    }
                }
                else if (sum < target ){
                    k++;
                }
                else if( sum > target ){
                    l--;
                }
            }
        }
    }

    return ans;
}
int main()
{
    int n;
    cout << "Enter the Number Of Elements in the Array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the Sum Needed: ";
    cin >> k;
    vector<vector<int>> ans = findQuadruples(arr, n, k);
    for (vector<int> x : ans)
    {
        for (int k : x)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}