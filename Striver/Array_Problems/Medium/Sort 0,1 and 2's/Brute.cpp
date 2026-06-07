/*
Time Complexity  : O(NLogN)
Space Complexity : O(1)
Algorithm  : 1) Simply sort and print the array
*/
#include <bits/stdc++.h>
using namespace std;
void Sort(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    for (int x : arr)
    {
        cout << x << " ";
    }
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
    Sort(arr, n);

    return 0;
}