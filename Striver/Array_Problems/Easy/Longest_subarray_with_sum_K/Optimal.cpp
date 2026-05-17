/*
TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)

ALGORITHM : Two Pointer Approach (Sliding Window )
This works only for positive numbers and zeros
*/

#include <bits/stdc++.h>
using namespace std;
int longest_subarray(vector<int> &arr, int n, int x)
{
    int i = 0;
    int sum = 0;
    int length = 0;
    for (int j = i; j < n; j++)
    {
        sum += arr[j];
        while (sum > x && i <= j)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == x)
        {
            length = max(length, j - i + 1);
        }
    }
    return length;
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
    cout << "Enter the Sum of the subarray: ";
    cin >> k;
    cout << "Maximum length of the Subarray with Sum k: " << longest_subarray(arr, n, k);

    return 0;
}