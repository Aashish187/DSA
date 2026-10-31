/*
Time Complexity : O(Rows)
Space Complexity : O(1)

In this Version , we have to Print The Nth given row like print the 3rd row
Output : 1 2 1 like this

BRUTE : For This , Absolute Brute is That we run a for loop for the columns and call the combination
Funtion
CODE :
        for(int i = 1 ; i<c;i++){
            cout<<combination(r-1,c-1); column will keep changing
        }
        Time Complexity  : (R*C)
        Space Complecity : O(1)
*/
#include <bits/stdc++.h>
using namespace std;
void printPascal(int rows)
{
    long long ans = 1;
    cout << ans << " ";
    for (int i = 1; i < rows; i++)
    {
        ans = ans * (rows - i);
        ans = ans / i;
        cout << ans << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the Row Number: ";
    cin >> n;
    int r;

    printPascal(n);

    return 0;
}