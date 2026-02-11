/*
In Brute force we can use 2 pointer approach or 2 for loops for the same task having time complexity O(n^2)
*/

/*
Time : O(n) linear because we traverse the complete array once
space : O(1) we are using mo extra data structure
*/
#include<bits/stdc++.h>
using namespace std;
bool is_sorted(vector<int> &arr,int n ){
    // iterate over the array and check if the previous element is smaller or equal to the next element
    if(n<2) return true;
    for(int i =0; i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
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
    if (is_sorted(arr,n) == true){
        cout<<"True";
    }
    else cout<<"False";
    return 0;
}