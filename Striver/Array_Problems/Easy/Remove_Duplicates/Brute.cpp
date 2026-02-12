/*
Time Complexity : O(nlogn(for set)+n(for loop))
Space Complexity: O(n) because set stores extra elements
*/

#include<bits/stdc++.h>
using namespace std;
void duplicates(vector<int>& arr, int  n){
   set<int> s;
   int count = 0;
   for(int i =0;i<n;i++){
    s.insert(arr[i]);
   }
   for(int x : s){
    count+=1;
    cout<<x<<" ";
   }
   cout<<"Number of Unique Different elements are: "<<count;
}
int main()
{
    int n ;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    duplicates(arr,n);
    return 0;
}