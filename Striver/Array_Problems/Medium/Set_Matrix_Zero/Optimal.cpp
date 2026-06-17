/*
Time Complexity  : O(2*M*N)
Space Complexity : O(1)
Algorithm  :
    1) Same as Better instead of creating arrays outside we will use the first row and column of the array to keep track of zeros
    2) We need another variable col0 to keep the track of the conflicting element
*/
#include <bits/stdc++.h>
using namespace std;
void Set_Matrix_Zero(vector<vector<int>> &arr)
{
    int m = arr.size();    // gets the rows size
    int n = arr[0].size(); // gets the column size
                           /*
                           matrix[0][] = col matrix
                           matrix[][0] = row matrix
                           col0 to avoid collision
                           */
    int col0 = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            { // mark that row
                arr[i][0] = 0;
                // mark column if it is not the first column
                if (j != 0)
                {
                    arr[0][j] = 0;
                }
                else
                {
                    // marks the variable if it is the first variable
                    col0 = 0;
                }
            }
        }
    }
    // now we fill the elements leaving first row and column
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i][0] == 0 || arr[0][j] == 0)
            {
                arr[i][j] = 0;
            }
        }
    }

    // if arr[0][0] = 0 make the first row zero
    if (arr[0][0] == 0)
    {
        for (int j = 0; j < n; j++)
        {
            arr[0][j] = 0;
        }
    }
    // if this is zero make the first column zero at last
    if (col0 == 0)
    {
        for (int i = 0; i < m; i++)
        {
            arr[i][0] = 0;
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
        {{1, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 0, 1}, {1, 0, 0, 1}}};
    Set_Matrix_Zero(matrix);
    return 0;
}