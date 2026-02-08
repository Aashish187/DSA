#include<bits/stdc++.h>
using namespace std;
void bubble_sort(){
    int n ;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){return ;}
    // bubble sort logic : 
    // compare adjacent values and push the maximum value at the last by swapping
    for(int i =0;i<n;i++){
        for(int j =0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    for(int x : arr){
        cout<<x<<" ";
    }
}
int main(){
    bubble_sort();
    return 0;
}