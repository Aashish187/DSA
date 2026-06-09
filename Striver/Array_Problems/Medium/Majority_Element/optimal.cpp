/*
Time Complexity  : O(N)
Space Complexity : O(1)
Algorithm  :  MOORE'S VOTING ALGORITHM
             1. Finding Candidate: We use a 'count' variable to neutralize different elements.
            Since the majority element appears > N/2 times, it will always survive the
            neutralization process.
            2. Verification: A second pass is done to ensure the survivor actually appears
            more than N/2 times (necessary if a majority is not guaranteed).
*/
#include <bits/stdc++.h>
using namespace std;
int Majority_Element(vector<int> &arr, int n)
{
    int count = 0;
    int element;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = arr[i];
            count++;
        }
        else if (arr[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    // verification part
    int final_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            final_count++;
        }
    }
    if (final_count > (n / 2))
    {
        return element;
    }

    return -1;
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
    cout << "Majority Element is : " << Majority_Element(arr, n);
    return 0;
}