#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity= O(n)
Space Complexity=O(k) number of non zero elements
*/
void Zeros_at_End(vector<int> &arr, int n ){
    vector<int> temp;
    for(int i =0;i<n;i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    int k = temp.size();
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
    for(int i =k;i<n;i++){
        arr[i]=0;
    }

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
    Zeros_at_End(arr,n);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}