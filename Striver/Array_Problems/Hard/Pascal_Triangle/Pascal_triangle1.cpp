/*
Time Complexuty : O(R or N-R)
Space Complexity : O(1)

                    This version will print the number needed of the pascal triangle
                    using combination formula = nCr
*/
#include <bits/stdc++.h>
using namespace std;
long long Combination(int n, int r)
{
    // remember nCr is equal to nC(n-r) which is easy to calculate
    long long res = 1;
    if (r > (n / 2))
    {
        r = n - r;
    }
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

long long printPascal(int rows, int columns)
{
    cout << Combination(rows - 1, columns - 1);
}
int main()
{
    int n;
    cout << "Enter the Row Number: ";
    cin >> n;
    int r;
    cout << "Enter the Column Number: ";
    cin >> r;

    printPascal(n, r);

    return 0;
}