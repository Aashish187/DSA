/*
TIME COMPLEXITY : O(N**2)
SPACE COMPLEXITY : O(1)

Algorithm  :
        1) Take first element add other elements and check if if the target sum if achieved or not
        2) if not move the pointer to the second and element and repeat the process

    Now it can have 2 Variants it could return Boolean True or False
    or it could return an array of the indexes of the elements
    if not found return No or {-1,-1}
*/

// Boolean Variant
#include <bits/stdc++.h>
using namespace std;
void Two_sum(vector<int> &arr, int n, int target)
{
    string flag = "No";
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                cout << "Yes";
                return;
                // we can return i and j if we want the index variant
            }
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