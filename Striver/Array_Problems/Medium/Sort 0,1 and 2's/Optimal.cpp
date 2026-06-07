/*
Time Complexity  : O(N)
Space Complexity : O(1)
        DUTCH NATIONAL FLAG ALGORITHM
        1) uses three pointers low, mid ,high
        2) mid pointer will do the job of traversing the unsorted array
        3) if arr[mid]= 0 we will swap it with low and move both forward
        4) if arr[mid] =1 just move mid forward
        5) if arr[mid]=2 swap with high and reduce the high pointer until the mid crosses the high pointer
*/
#include <bits/stdc++.h>
using namespace std;
void Dutch_National_Flag_Algo(vector<int> &arr, int n)
{
    int mid = 0, low = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
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
    Dutch_National_Flag_Algo(arr, n);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}