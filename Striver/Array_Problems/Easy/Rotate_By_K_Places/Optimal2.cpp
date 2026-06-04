#include<bits/stdc++.h>
using namespace std;
vector<int> rotate(vector<int>& arr, int n , int k){
    vector<int> ans;
    k=k%n;
    if (k==0) return arr;
    /*
    if we see the pattern it is like a loop rotated where we start from the number of places to the end and then 
    to the start to the number of places
    ex  : 1 2 3 (4 5 1 2 3) 4 5  now rotate by 3 places  do start from id=ndex 3 to end
        4 5 then 1 2 3
    Time Complexity(N) 
    Space Complexity=O(1) we dont use any extra variable ,output space will be O(N)
    */
   for(int i = 0 ;i<n;i++){
    ans.push_back(arr[(k+i) % n]);
   }
   return ans;
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
    int place;
    cout<<"Enter the Number Of places to be shifted: "<<endl;
    cin>>place;
    vector<int> ans =rotate(arr,n,place);
    for(int x :ans ){
        cout<<x<<" ";
    }
    return 0;
}