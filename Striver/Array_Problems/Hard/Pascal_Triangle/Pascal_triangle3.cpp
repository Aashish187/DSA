/*
Time Complexuty : O(Rows*Rows)
Space Complexity : O(Rows*Rows)

In this Version , we have to Generate the whole Triangle. So we will make the function which generates each row
and then wrap it in a loop to generate N rows.

*/
#include<bits/stdc++.h>
using namespace std;

vector<int> RowGenerator(int row){
    vector<int> ans ; 
    long long x =1;
    ans.push_back(x);
    for(int i =1 ;i<row;i++){
        x=x*(row-i);
        x=x/i;
        ans.push_back(x);
    }
    return ans;
}


void printPascal(int row) 
{
    vector<vector<int>> ans ;
    for(int i =1 ;i<=row;i++){
        ans.push_back(RowGenerator(i));
    }

    for (auto row : ans) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

}
int main()
{
    int n;
    cout << "Enter the Number of Rows To Print: ";
    cin >> n;
    printPascal(n);

    return 0;
}