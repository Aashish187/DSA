/*
Time Complexity  : O(N+(N/2))
Space Complexity : O(N)
Algorithm  :  
    1) seperate the positive and negative numbers 
    2) then place them back into the array , postive numbers at even places
        and negative numbers at odd places
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> Rearrange(vector<int> &arr, int n)
{
  vector<int> pos ;
  vector<int> neg;
  for(int i =0 ; i< n;i++){
    if(arr[i] >= 0){
        pos.emplace_back(arr[i]);
    }
    else {
        neg.emplace_back(arr[i]);
    }
  }
  for(int i = 0; i<(n/2);i++){
    arr[2*i] = pos[i];
    arr[(2*i)+1]=neg[i];
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
     for(int x : arr){
        cout<< x<<" ";
     }
    return 0;
}