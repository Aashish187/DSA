/*
Time Complexity : O(n1*n2)
Space Complexity : O(n1+n2) but extra space in our algo is linear O(1)
Intersection of 2 Sorted arrays it can work for unsorted arrays too
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> Intersection(vector<int> &arr1,vector<int> &arr2,int n1, int n2){
    vector<int> temp; // array to store the common elements
    // first loop is for inserting the element common in both arrays
   for(int i =0;i<n1;i++){
    // second loop check if the element is present in second array or not 
    for(int j = 0 ;j<n2;j++){
        if(arr1[i]==arr2[j]){
            if(temp.size() == 0 || temp.back() != arr1[i]){
                temp.push_back(arr1[i]);
                break;
            }
        }
    }
   }
    return temp;
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
    vector<int>result=Intersection(arr1,arr2,n1,n2);
    for(auto x : result){
        cout<<x<<" ";
    }
    return 0;
}