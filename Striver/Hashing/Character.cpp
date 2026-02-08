#include<bits/stdc++.h>
using namespace std;
int main()
{
    // enter the number of elements and array 
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    //Precomputation by making an hash array and storing the values of many times it appeared
    int hash[26]={0};
    for ( int i =0;i<s.size();i++){
        hash[s[i]-'a']+=1; // makes the index from 1 to 26t to map characters and add the value +1 if it is present in the array
    }
    //fetching
    int q;
    cout<<"Number of queries: ";
    cin>>q;
    while(q--){
        char num;
        cout<<"Enter the query: ";
        cin>>num;
        cout<<hash[num-'a']<<endl;
    }

    return 0;
}