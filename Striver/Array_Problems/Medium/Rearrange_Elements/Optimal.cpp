/*
rearrange array elements by sign 
Time Complexity  : O(N)
Space Complexity : O(N)
Algorithm  :  
    1) we will traverse the main array and place the elements to their desired position in the 
    another array to make it a single pass solution
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> Rearrange(vector<int> &arr, int n)
{
  vector<int> result(n) ;
  int pos_index= 0 ;
  int neg_index= 1;
  for(int i =0 ; i< n ;i++){
    if(arr[i] >= 0 ){
        result[pos_index]=arr[i];
        pos_index+=2;
    }
    else{
        result[neg_index]=arr[i];
        neg_index+=2;
    }
  }

  return result;
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
     vector<int> result = Rearrange(arr, n);
     for(int x : result){
        cout<< x<<" ";
     }
    return 0;
}