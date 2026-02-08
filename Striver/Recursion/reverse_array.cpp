// Time and space complexity both are O(n)
// Two Pointers Using Recursion
#include<bits/stdc++.h>
using namespace std;
// takes start end and an array to reverse
void reverse(int left, int arr[],int  right){
    // returns if the pointer crosses each other stops
    if (left>=right){
        return;
    }
    // else it swaps the elements
    swap(arr[left],arr[right]);
    reverse(left+1,arr,right-1);
}
int main()
{
    cout<<"Enter no elements:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the Array: ";
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(0,arr,n-1);

    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// Best Solution 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=n-1;i>=0;i--){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

