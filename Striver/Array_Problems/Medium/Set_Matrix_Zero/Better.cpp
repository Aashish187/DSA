/*
Time Complexity  : O(2*M*N)
Space Complexity : O(M+N)
Algorithm  :
    1) Create two arr to keep the track of zeros in the matrix
    2) if zero is encountered ,mark the row ans column 1
    3) iterate the matrix again , if one of row or column is 1 convert the element to 0.
*/
#include <bits/stdc++.h>
using namespace std;
void Set_Matrix_Zero(vector<vector<int>> &arr)
{
    int m = arr.size();    // gets the rows size
    int n = arr[0].size(); // gets the column size
    vector<int> rows(m, 0);
    vector<int> columns(n, 0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            { // mark that row and column 
                rows[i]= 1;
                columns[j]=1;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((rows[i] || columns[j] )==1)
            {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> matrix = {
        {{1,1,1,1}, {1,0,1,1}, {1,1,0,1},{1,0,0,1}}};
    Set_Matrix_Zero(matrix);
    return 0;
}