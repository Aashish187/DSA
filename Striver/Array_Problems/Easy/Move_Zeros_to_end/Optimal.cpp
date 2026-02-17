/*
Time Complexity : O(n)
Space Complexity :O(1)
*/
#include<bits/stdc++.h>
using namespace std;
void Zeros_at_end(vector<int>& arr, int n ){
    int i = -1; // keeps the track of the zero 
    for(int j = 0;j<n;j++){
        if(arr[j] == 0){ // finds and sets the index of the zero element to i variable
            i=j;
            break;
        }
    }
    if (i==-1) return ;
    for(int j =i+1;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
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
    Zeros_at_end(arr,n);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}