/*
Time Complexity  : O(N*M*(M+N))
Space Complexity : O(1)
Algorithm  :
    1) Iterate in the matrix and make all the non zero elements in the row and column -1 where 0 is found
    2) then convert all the -1 in the matrix 0
*/
#include <bits/stdc++.h>
using namespace std;
void Set_Matrix_Zero(vector<vector<int>> &arr)
{
    int m = arr.size();    // gets the rows size
    int n = arr[0].size(); // gets the column size
    // selects one row and traverse all the columns
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                // to make the rows -1
                for (int i = 0; i < m; i++)
                {
                    if (arr[i][j] != 0)
                    {
                        arr[i][j] = -1;
                    }
                }
                // to make the columns -1
                for (int j = 0; j < n; j++)
                {
                    if (arr[i][j] != 0)
                    {
                        arr[i][j] = -1;
                    }
                }
            }
        }
    }
    // Loop to convert the markers -1 to zero
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == -1)
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
        {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}}};
    Set_Matrix_Zero(matrix);
    return 0;
}