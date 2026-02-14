#include<bits/stdc++.h>
using namespace std;
void left_rotated(vector<int>& arr, int n){
/*
    Since we just have to left rotate the array by one, we will take the first element and store it in
    temporary variable then loop and shift all the elements to the left and then assign the first variable to 
    the last element
Time complexity:O(n) 
Space Complexity:O(1)
*/
    int temp=arr[0];
    for(int j =1;j<n;j++){
        arr[j-1]=arr[j];
    }
    arr[n-1]=temp;
}
int main()
{
    int n ;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    left_rotated(arr,n);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}