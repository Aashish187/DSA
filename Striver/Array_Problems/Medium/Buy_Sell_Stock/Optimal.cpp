/*
Time Complexity  : O(N)
Space Complexity : O(1)
Algorithm  :
    1) Initialize 'min_cost' with the first day's price and 'max_profit' as 0.
    2) Traverse the array starting from the first day.
    3) For each day:
       a) Calculate 'profit' by subtracting 'min_cost' from the current price.
       b) Update 'max_profit' if the current profit is the best seen so far.
       c) Update 'min_cost' if the current price is lower than our previous minimum.
    4) Return 'max_profit'.
*/
#include <bits/stdc++.h>
using namespace std;
int Buy_sell(vector<int> &arr, int n)
{
    int max_profit = 0;
    int min_cost = arr[0];
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        profit = arr[i] - min_cost;
        max_profit = max(max_profit, profit);
        min_cost = min(arr[i], min_cost);
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