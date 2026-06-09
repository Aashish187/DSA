/*
Time Complexity  : O(NLogN)
Space Complexity : O(N)
Algorithm  :
            1) We Traverse the array , if the lement is not present in the map we add it
            2) if already present increment it's frequency
            3) then we print the element whose frequency is more than n/2
*/
#include <bits/stdc++.h>
using namespace std;
int Majority_Element(vector<int> &arr, int n)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
        if (mpp[arr[i]] > (n / 2))
        {
            return arr[i];
        }
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