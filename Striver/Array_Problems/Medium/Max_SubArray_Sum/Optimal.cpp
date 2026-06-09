/*
Time Complexity  : O(N)
Space Complexity : O(1)
Algorithm  :   KADANE ALGORITHM
            1) Initialize 'max_sum' with INT_MIN and a running 'sum' as 0.
            2) Traverse the array, adding each element to the running 'sum'.
            3) After each addition, update 'max_sum' if the current 'sum' is greater.
            4) The "Magic Step": If the running 'sum' drops below 0, reset it to 0.
               This is because a negative sum will always reduce the value
               of any future subarray it's added to.
            5) Return the final 'max_sum'.
*/
#include <bits/stdc++.h>
using namespace std;
int Max_Subarray_Sum(vector<int> &arr, int n)
{
    int max_sum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        max_sum = max(max_sum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max_sum;
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
    cout << "Max Sum of the SubArray is : " << Max_Subarray_Sum(arr, n);
    return 0;
}