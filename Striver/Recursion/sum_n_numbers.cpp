// Parameterised Recursion
#include<bits/stdc++.h>
using namespace std;
void summ(int i , int sum){
    if (i<1){
        cout<<sum;
        return;
    }
    summ(i-1,sum+i);
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    summ(n,0);
    return 0;
}


//Functional Recursion
#include<bits/stdc++.h>
using namespace std;
int summation(int n){
    if (n==0){
        return 0;
    }
    return n+summation(n-1);

}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a=summation(n);
    cout<<a;
    return 0;
}
