/*
Time Complexity  : O(N**2)
Space Complexity : O(1)
Algorithm  :  1) select one element and then traverse whole array by calculating difference
              2) store the difference in another variable called profit by somparing them
              3) return the profit at end
*/
#include <bits/stdc++.h>
using namespace std;
int Buy_sell(vector<int> &arr, int n)
{
    int max_profit = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int profit = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                profit = arr[j] - arr[i];
                max_profit = max(max_profit, profit);
            }
        }
    }
    return max_profit;
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
    cout << "Profit is : " << Buy_sell(arr, n);
    return 0;
}