/*
Time Complexity  : O(N**2)
Space Complexity : O(1)
Algorithm  :  1) select one element and then traverse whole array by calculating it's sum
              2) store the sum in another variable called max sum by comparing them
              3) return the maxsum variable at end
*/
#include <bits/stdc++.h>
using namespace std;
int Max_Subarray_Sum(vector<int> &arr, int n)
{
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            max_sum = max(max_sum, sum);
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