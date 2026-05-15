/*
Time Complexity : O(N)
Space Complexity : O(1)
ALgorithm : Using XOR operation
    1. we xor all the elements present in the array and the property of XOR just leave the
    element whose frequency is 1.
*/
#include <bits/stdc++.h>
using namespace std;
int One_Number(vector<int> &arr, int n)
{
    int XOR = arr[0];
    for (int i = 1; i < n; i++)
    {
        XOR = XOR ^ arr[i];
    }
    return XOR;
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
    cout << "Number that Appears only once is: " << One_Number(arr, n);
    return 0;
}