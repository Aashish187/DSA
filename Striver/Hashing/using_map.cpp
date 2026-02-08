#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    map <int , int> mpp;
    for (int i =0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    // to view the map
    for (auto it :mpp){
        cout<<it.first<<"->"<<it.second<<"\n";}

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        cout<<mpp[n]<<"\n";
    }
    return 0;
}