/*
Time Complexity : O(n)
Space Complexity: O(1)

ALGORITHM :
    1. Traverse and count the number of consecutive ones and increase the counter
    2. if we find zero make the counter 0 again ad store the value in another variable
    3. calculate the max value between counter and variable
*/
#include <bits/stdc++.h>
using namespace std;
int Maximum_Consecutive_Ones(vector<int> &arr, int n)
{
    int counter = 0;
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            ones = max(counter, ones);
            counter = 0;
        }
        else
        {
            counter++;
        }
    }
    return max(ones, counter);
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
    cout << "Maximum Consecutive Ones Are: " << Maximum_Consecutive_Ones(arr, n);
    return 0;
}