/*
Time Complexity  : O(N)
Space Complexity : O(N) to store in the set
Algorithm  :
    1) Insert all elements into an unordered_set.
    2) Iterate through the set.
    3) Only start counting if the current element is the START of a sequence
       (i.e., 'element - 1' is not in the set).
    4) Use a while loop to find the length of the streak.
*/
#include <bits/stdc++.h>
using namespace std;
int Longest_Consecutive_Sequence(vector<int> &arr, int n)
{
    unordered_set<int> s;
    if (n == 0)
        return 0;
    // removes all the duplicates
    int max_length = 0;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    // iterate over the set
    for (auto it : s)
    {
        // checks if the previous element of it exist or not , if not it is the starter
        if (s.find(it - 1) == s.end())
        {
            int count = 1;
            int x = it;
            // find the next elements after it and add the count
            while (s.find(x + 1) != s.end())
            {
                x += 1;
                count += 1;
            }
            max_length = max(max_length, count);
        }
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