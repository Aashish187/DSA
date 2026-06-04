/*
TIME COMPLEXITY : O(N) if the sorting is not considered and a sorted array is provided else
                  O(NLogN)
SPACE COMPLEXITY : O(1)

Algorithm  :
        1) we will sort the array
        2) we will put two pointers, one left and other to the right
        3) if the sum is less than target increase left and if greater than target decrease right
*/

// Boolean Variant
#include <bits/stdc++.h>
using namespace std;
void Two_sum(vector<int> &arr, int n, int target)
{
    sort(arr.begin(), arr.end()); // takes (nlogn) time
    int left = 0, right = n - 1;
    while (left < right)
    {
        if ((arr[left] + arr[right]) > target)
        {
            right--;
        }
        else if ((arr[left] + arr[right]) < target)
        {
            left++;
        }
        else if ((arr[left] + arr[right]) == target)
        {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
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