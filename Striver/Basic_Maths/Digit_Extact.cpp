#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num =83422;
    // while(num>0){
    //     int last_Digit=num%10;
    //     cout<<last_Digit<<"\n";
    //     num=num/10;

    // }
    int count=log10(num)+1; // mathematical approach
    cout<<count;
    return 0;
}