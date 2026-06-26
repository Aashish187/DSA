/*
TIME COMPLEXITY : O(N*M)
SPACE COMPLEXITY:O(N*M) to store the elements

Algorithm :
            Initialize Boundaries: Define four pointers: top (first row), bottom (last row),
             left (first column), and right (last column).

            Traverse Right: Move from left to right along the top row. Once done, 
            increment top to "remove" that row from future consideration.

            Traverse Down: Move from top to bottom along the right column. Once done, 
            decrement right to "remove" that column.

            Traverse Left (Conditional): If the top boundary hasn't crossed the bottom,
             move from right to left along the bottom row. Once done, decrement bottom.

            Traverse Up (Conditional): If the left boundary hasn't crossed the right,
             move from bottom to top along the left column. Once done, increment left.

            Repeat: Continue the process until top > bottom or left > right.
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>> &MATRIX)
{
    int n = MATRIX.size();
    int m = MATRIX[0].size();
    int left = 0, right = m - 1, bottom = n - 1, top = 0;
    vector<int> ans;
    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(MATRIX[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(MATRIX[i][right]);
        }
        right--;
        // we updated top , so again check the condition
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(MATRIX[bottom][i]);
            }
            bottom--;
        }
        // we updated right , so again check the condition
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(MATRIX[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12},
         {13, 14, 15, 16}}};
    vector<int> mat = spiralMatrix(matrix);
    for (int x : mat)
    {
        cout << x << " ";
    }
}
