/*
TIME COMPLEXITY : O(N**4)
SPACE COMPLEXITY : 2*O(M) number of unique triplets
*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> findQuadruples(vector<int>arr, int n,int target) {
    set<vector<int>> s;
    for(int i = 0 ; i< n;i++){
        for(int  j =i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                for(int m =k+1;m<n;m++){
                    long long sum = arr[i]+arr[j]+arr[k]+arr[m];
                    if(sum == target ){
                        vector<int>temp={ arr[i],arr[j],arr[k],arr[m]};
                        sort(temp.begin(),temp.end());
                        s.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(),s.end());
    return ans ;
}
int main()
{
    int n;
    cout << "Enter the Number Of Elements in the Array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the Sum Needed: ";
    cin >> k;
    vector<vector<int>> ans=findQuadruples(arr,n,k);
    for(vector<int> x : ans){
       for(int k : x){
        cout<<k<<" ";
       }
       cout<<endl;
    }
    return 0;
}