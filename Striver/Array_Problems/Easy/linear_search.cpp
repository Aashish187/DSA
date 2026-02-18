#include<bits/stdc++.h>
using namespace std;
/*
Time complexity : O(n) as we traverse n elements of the array
Space Complexity :O(1) as we use constant variables or auxillary space
*/
int linear_search(vector<int> &arr, int n){
    int num;
    cout<<"Enter the Number You want to Find: ";
    cin>>num;
    for(int i =0 ;i <n;i++){
        if(num ==  arr[i]){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n ;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Index of the Number: "<<linear_search(arr,n);
    return 0;
}