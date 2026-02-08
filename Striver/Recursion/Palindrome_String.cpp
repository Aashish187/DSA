#include<bits/stdc++.h>
using namespace std;
bool string_Palindrome(string s,int i){
    int n =s.size();
    if (i>=n/2){ // Base condition to stop pointer if it crosses middle because we compare first and last elements
        // and then move the pointer
        return true ;
    }
    if (s[i]!=s[n-i-1]){
        return false;
    }
    return string_Palindrome(s,i+1);
}
int main()
{
    string s;
    cout<<"Enter the String: ";
    cin>>s;

   bool a=string_Palindrome(s,0);
    if (a==1){
        cout<<"Yes";
    } else cout<<"No";

    return 0;
}

