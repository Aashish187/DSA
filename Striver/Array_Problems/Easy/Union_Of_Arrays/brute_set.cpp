/*
Time Complexity :O(n1+n2 log(n1+n2)) insertion in set also takes logk time
Space Complexity:O(n1+n2)
*/
#include<bits/stdc++.h>
using namespace std;
// Same Logiv is used as earlier just map has been switched to set
void Union(vector<int> &arr1,vector<int> &arr2, int n1, int n2){
    set<int> s;
    for(int i =0;i<n1;i++){
        s.insert(arr1[i]);
    }
    for(int i =0;i<n2;i++){
        s.insert(arr2[i]);
    }
    cout<<"Union : ";
    for(auto it :  s ){
        cout<<it<<" ";
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