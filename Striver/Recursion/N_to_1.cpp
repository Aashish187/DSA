// Time complexity O(n)
// Space complexity O(n)

#include<bits/stdc++.h>
using namespace std;
void num(int  i, int n ){
    // break recursion if i less than 1
    if (i<1){
        return;
    }
    cout<<i<<"\n";
    //decrease the number
    num(i-1,n);
}
int main()
{
    cout<<"Enter the value of n: ";
    int n ;
    cin>>n;
    num(n,n);
    return 0;
}