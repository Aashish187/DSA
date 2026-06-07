/*
Time Complexity  : O(2N)
Space Complexity : O(1)
Algorithm  : 1) Count the number of 0,1 and 2
            2) and then overwrite the array according to that
*/
#include <bits/stdc++.h>
using namespace std;
void Sort(vector<int> &arr, int n)
{
    int zero = 0, one = 0, two = 0;
    // first array traversal
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;
        else if (arr[i] == 1)
            one++;
        else if (arr[i] == 2)
            two++;
    }
    // second array traversal
    for (int i = 0; i < zero; i++)
    {
        arr[i] = 0;
    }
    for (int i = zero; i < (zero + one); i++)
    {
        arr[i] = 1;
    }
    for (int i = (zero + one); i < n; i++)
    {
        arr[i] = 2;
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
    Sort(arr, n);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}