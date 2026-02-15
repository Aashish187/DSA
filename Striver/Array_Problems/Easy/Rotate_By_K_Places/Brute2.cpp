/*
Time Complexity : O(k+n-k+k)=(n+k)
Space Complexity : O(k) as we store k elements 
*/

#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int> & arr, int n ,int k){
    k=k%n; // if k is greater than n 
    if(k==0) return ;
    vector<int>temp;
    for(int i =0;i<k;i++){
        temp.push_back(arr[i]);
    }
    for(int j =k;j<n;j++){
        arr[j-k]=arr[j];
    }
    for(int i =n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }
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