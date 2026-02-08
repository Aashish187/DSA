#include<bits/stdc++.h>
using namespace std;
// function for selection sort
void Selection_Sort(){
    // taking array as input from the users
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr(n); // we don't use [] because it will create vectors like 2 vectors not a vector with 2 elements
    cout<<"Enter the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    // main selection sort code
    // loop till where swappin can be done i.e. second last element tk hi swap kr skte hai
    for ( int i=0;i<n-1;i++){
        int min =i;
    //this will traverse the arr till a lower element than at 0 index is found and then do the swapping
        for ( int j=i+1;j<n;j++){ 
            if(arr[j]<arr[min]){ // ye check krta hai traverse krte hue that element is minimum from the selected min i.e. i
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
// print the sorted array
    cout<<"Sorted Array: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
Selection_Sort();
    return 0;
}