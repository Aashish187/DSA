/*
TIME COMPLEXITY : O(N**3 * log(number of elements stored in the set))
SPACE COMPLEXITY : O(number of element stored in the set)+2*O(M) number of unique triplets
*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<long long>> findQuadruples(vector<int>arr, int n,int target) {
    set<vector<long long>> s;
    for(int i = 0 ; i< n;i++){
        for(int  j =i+1;j<n;j++){
            set<int> st;
            for(int k = j+1;k<n;k++){
                    long long  l = target-(arr[i]+arr[j]+arr[k]);
                    if(st.find(l) != st.end() ){
                        vector<long long>temp={ arr[i],arr[j],arr[k],l};
                        sort(temp.begin(),temp.end());
                        s.insert(temp);
                    }
                    else{
                        st.insert(arr[k]);
                    }
                }
            }
        }
    vector<vector<long long>> ans(s.begin(),s.end());
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
    vector<vector<long long>> ans=findQuadruples(arr,n,k);
    for(vector<long long> x : ans){
       for(int k : x){
        cout<<k<<" ";
       }
       cout<<endl;
    }
    return 0;
}