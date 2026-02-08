#include<bits/stdc++.h>
using namespace std;
int BruteForce(vector<int>& arr, int n){
    /*
    Time complexity : n^2
    space:1
    */
    // we will sort the array using the sorting algo and return the 
    //  last element of the array which will be maximum
    // using bubble_sort
    // We can also use the sort function in the c++ library 
    /*
    sort(arr.begin(),arr.end());
    */

    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    return arr[n-1];
}
// Optimal Approach
/*
Time : n because we iterate the array once
space= we use constant variable which get updated 
*/
int max_element(vector<int>& arr, int n){
    int max_element=arr[0];
    for( int i =1;i<n;i++){
        if(arr[i]>max_element){
            max_element=arr[i];
        }
    }
    return max_element;
}
int main(){
    int n ;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int largest_element=max_element(arr,n);
    cout<<largest_element;
    return 0 ;
}
