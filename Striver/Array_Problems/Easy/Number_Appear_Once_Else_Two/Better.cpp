/*
Time Complexity : O(N)
Space Complexity : O(largest+1)
ALgorithm : Using Array Hashing
    1.  We have to find the max element for the hash array size
    2. Creating and iterating the hasharray to calculate frequency of every element
    3. now we will find the element with the frequency 1 in the hash array
*/
#include <bits/stdc++.h>
using namespace std;
int One_Number(vector<int> &arr, int n)
{

    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    vector<int> a(largest + 1);
    for (int i = 0; i < n; i++)
    {
        a[arr[i]]++;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 1)
        {
            return i;
        }
    }
    return -1;
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