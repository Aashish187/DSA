/*
Time Complexity : O(n)
Space Complexity: O(1)

ALGORITHM : we can use the concept of XOR as xor with itself give 0 and
xor with 0 gvies the number itself order doesn't matter

    1. we will xor the array elements
    2. we will xor the elements till n+1
    3. then we will xor them both which gives the missing number ans as every number
    in the array and n+1 number will become zero and the number not present will be found
*/
#include <bits/stdc++.h>
using namespace std;
int Missing_Number(vector<int> &arr, int n)
{
    int XOR1 = 0;
    int XOR2 = 0;
    for (int i = 0; i < n; i++)
    {
        XOR1 = XOR1 ^ arr[i];
    }
    for (int i = 1; i <= n + 1; i++)
    {
        XOR2 = XOR2 ^ i;
    }
    return XOR1 ^ XOR2;
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