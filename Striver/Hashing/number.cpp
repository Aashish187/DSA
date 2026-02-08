#include<bits/stdc++.h>
using namespace std;
int main()
{
    // enter the number of elements and array 
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter the array: ";
    int arr[n];
    for ( int i =0;i<n;i++){
        cin>>arr[i];
    }

    //Precomputation by making an hash array and storing the values of many times it appeared
    int hash[13]={0};
    for ( int i =0;i<n;i++){
        hash[arr[i]]+=1; // makes the index from 1 to 13 and add the value +1 if it is present in the array
    }
    //fetching
    int q;
    cout<<"Number of queries: ";
    cin>>q;
    while(q--){
        int num;
        cout<<"Enter the query: ";
        cin>>num;
        cout<<hash[num]<<endl;
    }

    return 0;
}