/*
TIME COMPLEXITY : O(N*N*N)
SPACE COMPLEXITY : 2*O(M)  number of unique triplets
*/
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == K)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    if (ans.empty())
    {
        ans.push_back({-1, -1, -1});
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
    cout << "Enter the Required Sum: ";
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