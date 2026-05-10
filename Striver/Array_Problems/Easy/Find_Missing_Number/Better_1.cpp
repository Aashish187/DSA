/*
Time Complexity : O(n)
Space Complexity: O(n)
ALGORITHM : we can use the concept of hashing 
    1.We will create an hash array of n+2 size 
    2.iterate and increment the values at the index
    3.then print the elements whose value is zero int the hash array because they were not found.
    */
#include<bits/stdc++.h>
using namespace std;
int Missing_Number(vector<int> &arr, int n ){
    
   vector<int> hash(n+2,0);
   for(int i=0;i<n;i++ ){
        hash[arr[i]]++;
   }
 
   for(int i =1 ; i<hash.size();i++){
    if(hash[i] == 0){
        return i;
    }
   }
    return -1;
}
int main()
{
    int n ;
    cout<<"Enter the Number of Elements: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Array Elements: ";
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Missing Number is: "<<Missing_Number(arr,n);
    return 0;
}