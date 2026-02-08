// Fibonacci Numbers are 0,1,1,3,5,8,13
// uses recursion for last two elements than n
// Time complexity is 2**N becasue every recursive call gets called 2 times again
#include<bits/stdc++.h>
using namespace std;
int Fibonacci(int n){
    if (n<=1){return n;}
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int main()
{
    int n;
    cout<<"Enter the fibonacci terms Needed: ";
    cin>>n;
    cout<<Fibonacci(n);
    return 0;
}

// Fibonaaci Numbers using loops
// 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 0;
    int b=1;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=0;i<18;i++){
        int c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
    return 0;

}
