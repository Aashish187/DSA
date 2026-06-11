/*
                     If asked for subarray add two variable start and end
                                for the subarray indexes.
Time Complexity  : O(N)
Space Complexity : O(1)

*/
#include <bits/stdc++.h>
using namespace std;
int Max_Subarray_Sum(vector<int> &arr, int n)
{
    int max_sum = INT_MIN;
    int sum = 0;
    int start = -1, end = -1;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            index = i;
        }
        sum += arr[i];
        max_sum = max(max_sum, sum);
        start = index;
        end = i;
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << "Subarray is : ";
    for (int i = start; i < end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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