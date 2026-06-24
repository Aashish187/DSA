/*
Time Complexity  : O(N*N)
Space Complexity : O(N*N)
Algorithm  :
    1) find the pattern of the changes of the element and place the element at it's correct location
*/
#include <bits/stdc++.h>
using namespace std;
void Set_Matrix_Zero(vector<vector<int>> &arr)
{
    
    int n= arr.size();
    vector<vector<int>> a(n,vector<int>(n));
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            a[j][(n-1)-i]=arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> matrix = {
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        }};
    Set_Matrix_Zero(matrix);
    return 0;
}