/*
Time Complexity :O(n1+n2)
Space Complexity :O(n1+n2)
We have used c++ function .back() in this code which gives the last element present in the array or vector
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> Union(vector<int> &arr1,vector<int> &arr2, int n1, int n2){
    int i=0,j=0;
    vector<int> temp;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            if(temp.size() == 0 || temp.back() != arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr2[j]<arr1[i]){
            if(temp.size() == 0 || temp.back() != arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
        }
        else if( arr1[i] == arr2[j]){
            if(temp.size()==0 || temp.back() != arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
            j++;
        }
        
    }
    while(i<n1){
        if(temp.size() == 0 || temp.back() != arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
    }
    while(j<n2){
        if(temp.size() == 0 || temp.back() != arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
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
    vector<int>result=Union(arr1,arr2,n1,n2);
    for(auto x : result){
        cout<<x<<" ";
    }
    return 0;
}
