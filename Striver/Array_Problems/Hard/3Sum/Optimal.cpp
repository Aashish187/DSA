/*
TIME COMPLEXITY : O(N*N)
SPACE COMPLEXITY : O(1) ans is used to store not solve
*/
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            if ((arr[i] + arr[j] + arr[k]) == K)
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1])
                {
                    j++;
                }
                while (j < k && arr[k] == arr[k + 1])
                {
                    k--;
                }
            }
            else if ((arr[i] + arr[j] + arr[k]) < K)
            {
                j++;
            }
            else if ((arr[i] + arr[j] + arr[k]) > K)
            {
                k--;
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
    vector<vector<int>> ans = findTriplets(arr, n, k);
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