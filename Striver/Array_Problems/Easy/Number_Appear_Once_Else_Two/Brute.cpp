/*
Time Complexity = O(n*n)
Space Complexity = O(1)
Algorithm :
    1. we will loop the entire array for one element and check if it found more than once
    we will increase the count
    2. if it is found only once we will return the element
*/

#include <bits/stdc++.h>
using namespace std;
int One_Number(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
            return arr[i];
    }
    return -1; // for avoiding compiler warnings
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
