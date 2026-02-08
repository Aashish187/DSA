#include<bits/stdc++.h>
using namespace std;
/*
We can sort the array and return the 2nd  and 2nd last element for second largest and minimum 
Time : logn for sorting 
space : constant 
*/


/*
Time Complexity is O(n) or O(2n) we are usign 2 for loops
*/
// Function for finding second largest element
// instead of the first loop we can use default functions also 

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
    }
    // traverses and checks if there is a number between largest and second largest and updates second largest
    for(int i =0;i<n;i++){
        if(arr[i]!=largest_element && arr[i]>second_largest_element){
            second_largest_element=arr[i];
        }
    }
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
    }
    for(int i = 0 ;i<n;i++){
        if(smallest != arr[i] && arr[i]<second_smallest){
            second_smallest=arr[i];
        }
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
