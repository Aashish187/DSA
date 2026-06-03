/*
TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(n)

ALGORITHM : For Negative Numbers use Prefix Sum 
            1) Use hashing to store currentsum- target with index
            2)check if the prefixsum is in the table or not ,
            if not add it and if present update the length
*/

#include<bits/stdc++.h>
using namespace std;
int longest_subarray(vector<int> &arr,int n ,int x){
    unordered_map<int,int> mpp;
    int sum  = 0 ; 
    int length  = 0 ;
    for(int i = 0 ;i<n;i++){
        sum+=arr[i];
        if(sum == x ){
            length = max(length,i+1);
        }
        int rem = sum-x;
        if(mpp.find(rem) != mpp.end()){
            length=max(length,i-mpp[rem]);
        }
        if(mpp.find(sum) == mpp.end()){
            mpp.insert({sum,i});
        }

    }
    return length;

}
int main()
{
    int n ;
    cout<<"Enter the Number Of Elements in the Array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    int k ;
    cout<<"Enter the Sum of the subarray: ";
    cin>>k;
    cout<<"Maximum length of the Subarray with Sum k: "<<longest_subarray(arr,n,k);

    return 0;
}