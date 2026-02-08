/*
Optimal Two Pointer Approach to Find Union of 2 sorted arrays
Time Complexity : O(n+m)
Space Complexity : O(n+m) if union arr is considered 
*/
#include <bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
   int n1=a.size(); 
   int n2=b.size(); 
   vector <int>Union ;
   int i=0;
   int j=0;
   while(i<n1 && j<n2){
       if(a[i]<=b[j]){
           if(Union.size()==0 || Union.back() != a[i]){
               Union.push_back(a[i]);
           }
               i++;
       }
       else{
           if(Union.size()==0 || Union.back() != b[j]){
               Union.push_back(b[j]);
           }
               j++;
       }
       }
       while(i<n1){
           if(Union.back() != a[i]){
               Union.push_back(a[i]);
           }
               i++;
   }
       while(j<n2){
           if(Union.back() != b[j]){
               Union.push_back(b[j]);
           }
               j++;
   }
   return Union;
   
}
// Brute Force Approach :  Using set ( map can also be used)
// Time Complexity : O((n+m)log(n+m))
// Space Complexity : O(n+m) if union arr is considered else O(1)
#include <bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b) {
    
    set<int> st;
    vector<int> vec;

    // Insert elements from first array
    for (int i = 0; i < a.size(); i++) {
        st.insert(a[i]);
    }

    // Insert elements from second array
    for (int i = 0; i < b.size(); i++) {
        st.insert(b[i]);
    }

    // Copy set elements to result vector
    for (auto it : st) {
        vec.emplace_back(it);
    }

    return vec;
}
