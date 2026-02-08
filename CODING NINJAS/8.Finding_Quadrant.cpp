#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
/* it is an easy code with simple logic
we will take two inputs x and y are cartesian co-ordinates
and then check the conditions:
1. if both 0 then origin
2. if x '+'ve and y is '+'ve then 1st quadrant
2. if x '-'ve and y is '+'ve then 2nd quadrant
2. if x '-'ve and y is '-'ve then 3rd quadrant
2. if x '+'ve and y is '-'ve then 4th quadrant
*/
int main() {
    int x , y;
    cin>>x>>y;
    if (x==0 && y==0){
        cout<<"Origin";
    }
    else if (x==0){
        cout<<"y axis";
    }
    else if ( y==0){
        cout<<"x axis";
    }
    else if (x>0){
        if (y>0){
            cout<<"1st Quadrant";
        }
        else cout<<"4th Quadrant";
    }
    else if (x<0){
        if (y>0){
            cout<<"2nd Quadrant";
        }
        else cout<<"3rd Quadrant";
    }

    return 0;
}
