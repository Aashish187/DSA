#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    // traverses the arr
    while(i<j){
        // finds the greater element than pivot
        while(arr[i]<=pivot && i<=high){i++;}
        // finds smaller element than pivot
        while(arr[j]>pivot && j>low){j--;}
        //swaps both the elements when found
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    // else when i crosses j it swaps the pivot with j 
    swap(arr[low],arr[j]);
    // return the position of j for the index
    return j;
}

void QuickSort(int arr[],int low, int high){
    if (low<high){
       int index=partition(arr,low,high);
       QuickSort(arr,low,index-1);
       QuickSort(arr,index+1,high);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    QuickSort(arr,0,n-1);

    cout<<"Sorted Array: ";
    for(int j =0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}