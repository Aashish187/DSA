/*
Time Complexity  : O(N**3)
Space Complexity : O(1)
Algorithm  :
    1) select one element increment it and search for it in the arr and increase the length
    2) if the element is found , increment again and find
    3) do this until the sequence breaks and at last compare the length and max_length
    4) return max length of the consecutive sequence
*/
#include <bits/stdc++.h>
using namespace std;
bool Search(vector<int> &arr, int element)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }
    return false;
}
int Longest_Consecutive_Sequence(vector<int> &arr, int n)
{
    int max_length = 0;
    for (int i = 0; i < n; i++)
    {
        int length = 1;
        int x = arr[i];
        int element = x + 1;
        while (Search(arr, element) == true)
        {
            element += 1;
            length += 1;
        }
        max_length = max(max_length, length);
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