/*
Time Complexity : O(n1+n2)
Space Complexity : O(n1+n2)
The arrays should be sorted for this
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> Intersection(vector<int> &arr1, vector<int> &arr2, int n1, int n2)
{
    int i = 0, j = 0;
    vector<int> temp; // array to store the common elements
    while (i < n1 && j < n2)
    {
        // if the element is smaller in the first array move the i pointer forward
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        // if the element in the second array is smaller move the j pointer forward
        else if (arr1[i] > arr2[j])
        {
            j++;
        }

        // if the element is common in both arrays
        else if (arr1[i] == arr2[j])
        {
            // insert it into the array
            if (temp.size() == 0 || temp.back() != arr1[i])
            {
                temp.push_back(arr1[i]);
            }
            // move both the pointers forward
            i++;
            j++;
        }
    }
    return temp;
}
int main()
{
    int n1, n2;
    cout << "Enter the number of elements in arr1: ";
    cin >> n1;
    cout << "Enter the number of elements in arr2: ";
    cin >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    cout << "Enter the array elements of arr1 : ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the array elements of arr2 : ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    vector<int> result = Intersection(arr1, arr2, n1, n2);
    for (auto x : result)
    {
        cout << x << " ";
    }
    return 0;
}