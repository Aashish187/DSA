#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int n=high-low+1;
    int temp[n];
    int left=low;
    int right=mid+1;// pointer to compare the two subarrays
    int k=0;


    // Loop to traverse the loops
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp[k]=arr[left];
            left++;
        }
        else{
            temp[k]=arr[right];
            right++;
        }
        k++;
    }


    // loops if one sub array gets fully traversed we will add all the elements of the remaining array to the temp arr
    while(left<=mid){
        temp[k]=arr[left];
        left++;
        k++;
    }

    while(right<=high){
        temp[k]=arr[right];
        right++;
        k++;
    }

    // copying the temp arr to original array
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }


}
void MergeSort(int arr[],int low , int high){
    if(low>=high){ return;
    }
    int mid=(low+high)/2;
    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
   
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

    MergeSort(arr,0,n-1);

    cout<<"Sorted Array: ";
    for(int j =0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}