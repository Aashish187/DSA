#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& arr, int n , int k){
    k=k%n;
    if (k==0) return ;
    /*
    we can use the reverse function in c++
    Time Complexity(k+n-k+n)=O(2n) slight increase
    Space Complexity=O(1) we dont use any extra variable 
    */
   reverse(arr.begin(),arr.begin()+k);
   reverse(arr.begin()+k,arr.begin()+n);
   reverse(arr.begin(),arr.end());
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
    int place;
    cout<<"Enter the Number Of places to be shifted: "<<endl;
    cin>>place;
    rotate(arr,n,place);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}