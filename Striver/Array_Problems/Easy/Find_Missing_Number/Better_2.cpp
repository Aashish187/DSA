/*
Time Complexity : O(n)
Space Complexity: O(1)

ALGORITHM : we can use the concept of SUM of numbers
    1. we will calculate the sum of the number till n+1
    2. we will calculate the sum of the array elements
    3. subtract and the remaining part will be the missing element
*/
#include <bits/stdc++.h>
using namespace std;
long long Missing_Number(vector<int> &arr, int n)
{
    long long sum_arr = 0;
    for (int i = 0; i < n; i++)
    {
        sum_arr += arr[i];
    }
    long long N = n + 1;
    long long sum = ((N * (N + 1)) / 2);
    return (sum - sum_arr);
}
int main()
{
    int n;
    cout << "Enter the Number of Elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Missing Number is: " << Missing_Number(arr, n);
    return 0;
}