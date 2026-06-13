/*
Time Complexity  : O(NlogN)
Space Complexity : O(1)
Algorithm  :
    1) we first sort the array for the consecutive elements to the next to each other
    2) then keep the track of last element which should be 1 less than the current element
    3) if it is the sequence continues , add the length and update the current element to small
    4) if the curr element is equal to small , skip
    5) if not equal then , sequence breaked , reset length to 1 and the small to curr element
*/
#include <bits/stdc++.h>
using namespace std;
int Longest_Consecutive_Sequence(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    int max_length = 0;
    int last_small = INT_MIN;
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        // if the number continues in sequence
        if ((arr[i] - 1) == last_small)
        {
            length += 1;
            last_small = arr[i];
        }
        // if the sequence breaks
        else if ((arr[i]) != last_small)
        {
            length = 1;
            last_small = arr[i];
        }
        max_length = max(length, max_length);
    }
    return max_length;
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
    cout << "Longest Consecutive Sequence is : " << Longest_Consecutive_Sequence(arr, n);
    return 0;
}