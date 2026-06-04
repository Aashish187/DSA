/*
TIME COMPLEXITY : O(N)
SPACE COMPLEXITY : O(N) because if not found all the elements will be stored in the map

Algorithm  :
            1) we will check if the element (target - current element) is in the map
            2) if yes return
            3) add it to the map and repeat the process
*/

// Boolean Variant
#include <bits/stdc++.h>
using namespace std;
void Two_sum(vector<int> &arr, int n, int target)
{
    string flag = "No";
    // using unordered_map to store the elements with index
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int x = target - arr[i];
        if (mpp.find(x) == mpp.end())
        {
            mpp.insert({arr[i], i});
        }
        else
        {
            cout << "Yes";
            return;
        }
    }
    cout << flag;
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
    cout << "Enter the Target Sum: ";
    cin >> k;
    Two_sum(arr, n, k);

    return 0;
}