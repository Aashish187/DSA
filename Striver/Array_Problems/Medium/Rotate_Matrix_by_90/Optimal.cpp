/*
Time Complexity  : O(N*N)
Space Complexity : O(1)
Algorithm  :
    1)Transpose the matrix (swap arr[i][j] with arr[j][i]).
    2) Reverse each row of the transposed matrix.
*/
#include <bits/stdc++.h>
using namespace std;
void Set_Matrix_Zero(vector<vector<int>> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }
    for (int i = 0; i < n; i++)
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
        {{1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}}};
    Set_Matrix_Zero(matrix);
    return 0;
}