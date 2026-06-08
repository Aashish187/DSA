/*
Time Complexity  : O(N**2)
Space Complexity : O(1)
Algorithm  :
            1) We select one element and then we count it's frequency using another loop
            2) if frequency ig greater than n/2 we print it else return -1
*/
#include <bits/stdc++.h>
using namespace std;
int Majority_Element(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > (n / 2))
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