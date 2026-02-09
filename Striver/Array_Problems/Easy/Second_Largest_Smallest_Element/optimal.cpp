// it uses just one loop and if else condition which could also be done in better
/*
Time = O(n) for both 
space=O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int second_largest_element(vector<int>& arr, int n ){
    if(n<2){return -1;}
    int largest_element =arr[0];
    int second_largest_element = INT_MIN;
    // traverses and finds the max element
    for(int i =0;i<n;i++){
        /*
        largest=max(largest,arr[i]); same can be done for smallest using min 
        only difference in the striver approach
        */
        if(arr[i]>largest_element){
            second_largest_element=largest_element;
            largest_element=arr[i];
        }
        else if(arr[i] != largest_element && arr[i]>second_largest_element){
            second_largest_element=arr[i];
        }
    }
    if(second_largest_element == INT_MIN){return -1;}
    
    return second_largest_element;
}

int second_smallest_element(vector<int>& arr, int n ){
    if(n<2){return -1;}
    int smallest=arr[0];
    int second_smallest=INT_MAX;
    for(int i =1 ;i<n;i++){
        if(arr[i]<smallest){
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if( arr[i] != smallest && arr[i]<second_smallest){
            second_smallest=arr[i];
        }
    }

    if(second_smallest == INT_MAX){
        return -1;
    }
    return second_smallest;
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
    int x= second_smallest_element(arr,n);
    int y= second_largest_element(arr,n);
    cout<<"second smallest element: "<<x<<" "<<"second largest element: "<<y;
}