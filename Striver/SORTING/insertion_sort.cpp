#include<bits/stdc++.h>
using namespace std;
void insertion_sort(){
    int n ;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    // selection sort logic 
    /*
    1 8 5 6 9
    sorted part|unsorted part take one element from unsorted part compare it with the sorted part and put it in it's 
    position by shifting the other elements by one position.
    */
    for(int i =1;i<n;i++){
        int key=arr[i];
        int j = i-1; // to compare and shift the elements in the sorted part 
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j]; // shift the element by one position
            j--;
        }
        arr[j+1]=key;
    }
    for(int x : arr){
        cout<<x<<" ";
    }
}
int main(){
    insertion_sort();
    return 0;
}