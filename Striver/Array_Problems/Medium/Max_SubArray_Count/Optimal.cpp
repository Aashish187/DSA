/*
Time Complexity  : O(N)
Space Complexity : O(1)
*/
#include <bits/stdc++.h>
using namespace std;
int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    int n = arr.size();
    int count = 0;
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        int prefix_sum = sum - k;
        if (mpp.find(prefix_sum) != mpp.end())
        {
            count += mpp[prefix_sum];
        }
        mpp[sum]++;
    }
    return count;
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
    cout << "Enter the Sum of SubArray: ";
    int x;
    cin >> x;
    cout << findAllSubarraysWithGivenSum(arr, x);
    return 0;
}