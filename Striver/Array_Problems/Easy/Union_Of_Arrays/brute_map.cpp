/*
Time complexity : O((n1+n2)log(n1+n2)) // map takes log time to insert
Space Complexity : O(n1+n2) where n is the size of the map
*/
#include<bits/stdc++.h>
using namespace std;
void Union(vector<int>& arr1,vector<int>& arr2 , int n1,int n2 ){
    // takes 2 arrays and their sizes as argument and prints the union of elements in both the arrays
    map<int,int> mpp; // to store unique elements from both arrays
    // iterating and adding elements in the map 
    /* arr1= 1 2 3 4 5   arr2 = 2 3 3 4 6
    1 -> 1
    2 -> 2
    3 -> 3
    4 -> 2
    5 -> 1
    6-> 1
    */
    for(int i=0;i<n1;i++){
        mpp[arr1[i]]++;
    }
    for(int i=0;i<n2;i++){
        mpp[arr2[i]]++;
    }

    // uses iterator to access the maps first part and prints it that displays the union of elements
    cout<<"Union : ";
    for(auto it : mpp){
        cout<<it.first<<" ";
    }
}
int main()
{
    int n1,n2 ;
    cout<<"Enter the number of elements in arr1: ";
    cin>>n1;
    cout<<"Enter the number of elements in arr2: ";
    cin>>n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    cout<<"Enter the array elements of arr1 : ";
    for(int i =0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the array elements of arr2 : ";
    for(int i =0;i<n2;i++){
        cin>>arr2[i];
    }
    Union(arr1,arr2,n1,n2);
    return 0;
}