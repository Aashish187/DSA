/*
Time Complexity : O(N)
Space Complexity : O(N)
ALgorithm : Using map or unordered map Hashing
    1.  iterate the arr and add the frequency in the map data structure
    2. return the element with frequency one

Solves the problem for negative and large numbers
*/
#include <bits/stdc++.h>
using namespace std;
long long One_Number(vector<long long> &arr, int n)
{
    unordered_map<long long, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the Number of Elements: ";
    cin >> n;
    vector<long long> arr(n);
    cout << "Enter the Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Number that Appears only once is: " << One_Number(arr, n);
    return 0;
}