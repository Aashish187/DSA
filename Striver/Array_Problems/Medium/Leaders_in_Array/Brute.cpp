/*
Time Complexity  : O(n**2)
Space Complexity : O(n)
Algorithm  :  
    1) take one element and find if there is any other element greater than it ot not in the right
    2) if no greater element is present in the right store in into another array 
    3) else break the loop and skip to the next element 
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> Leaders(vector<int> &arr, int n){
    vector<int> leader;
    for(int i =0 ;i<n;i++){
        bool flag=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if (flag){
            leader.push_back(arr[i]);
        }
    }
    return leader;
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
     vector<int> leader=Leaders(arr, n);
     for(int x : leader){
        cout<< x<<" ";
     }
    return 0;
}