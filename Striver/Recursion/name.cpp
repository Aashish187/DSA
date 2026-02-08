#include<bits/stdc++.h>
using namespace std;
void name(int i , int n ){
    if (i>n){return;}
    cout<<"Aashish\n";
    name(i+1,n);
}
int main()
{
    int n ;
    cout<<"Enter n: ";
    cin>>n;
    name(1,n);
    return 0;
}
