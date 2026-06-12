/*
superior elements
Time Complexity  : O(N)
Space Complexity : O(1)
Algorithm  :
    1)
*/
#include <bits/stdc++.h>
using namespace std;
void Leaders(vector<int> &arr, int n)
{
    int i = n - 1;
    int greatest = 0; // use INT_MIN if negative numbers are present too
    for (i; i >= 0; i--)
    {
        if (arr[i] > greatest)
        {
            greatest = max(arr[i], greatest);
            cout << arr[i] << " ";
        }
    }
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
    Leaders(arr, n);

    return 0;
}