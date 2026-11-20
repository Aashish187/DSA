/*
TIME COMPLEXITY : O(N*N*log(unique triplets))
SPACE COMPLEXITY : 2*O(M)+O(N to store elements in the set )  number of unique triplets
*/
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        // this will reset after every first element change
        set<int> s;
        for (int j = i + 1; j < n; j++)
        {
            int third = K - (arr[i] + arr[j]);
            if (s.find(third) != s.end())
            {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            s.insert(arr[j]);
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