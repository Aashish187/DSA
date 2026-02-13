/*
Time Complexity : O(n) as we iterate over the array usign a for loop
Space Complexity : O(1) we use constant space 
*/
#include<bits/stdc++.h>
using namespace std;
int duplicates_removed(vector<int> &arr, int n ){
    int i= 0 ;
    for( int j =1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
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
    cout<<"The Number of Unique Elements: "<<duplicates_removed(arr,n);
    return 0;
}