/*
If Number of Positives and Negatives are not Equal
Time Complexity  : O(N+n/2)
Space Complexity : O(N)
Algorithm  :
    1)
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> Rearrange(vector<int> &arr, int n)
{
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos.emplace_back(arr[i]);
        }
        else
        {
            neg.emplace_back(arr[i]);
        }
    }
    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[(2 * i) + 1] = neg[i];
        }
        int index = 2 * (neg.size());
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[index] = pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[(2 * i) + 1] = neg[i];
        }
        int index = 2 * pos.size();
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[index] = neg[i];
            index++;
        }
    }

    return arr;
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
    Rearrange(arr, n);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}