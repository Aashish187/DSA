#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Number of elements
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    // Take input as arr

    cout<<"Enter the array: ";
    for ( int i =0;i<n;i++){
        cin>>arr[i];
    }
    // Unordered map maps elements to the no of times it appears
    unordered_map<int,int> mpp;
    for ( int i =0;i<n;i++){
        mpp[arr[i]]+=1;
    }
    // int number;
    // cin>>number;
    // // output the value stored which is frequency 
    // cout<<mpp[number];
    int max_element=0,minimum_element=0,min_frequency=n,max_frequency=0;
    for (auto it : mpp){
        int count=it.second;
        int element=it.first;
        if (count>max_frequency){
            max_frequency=count;
            max_element=element;
        }
        if (count<min_frequency){
            min_frequency=count;
            minimum_element=element;
        }
    }
cout<<"Max element: "<<max_element<<endl;
cout<<"Max frequency:"<<max_frequency<<"\n";
cout<<"Max element: "<<minimum_element<<endl;
cout<<"Min frequency:"<<min_frequency<<"\n";
    return 0;
}