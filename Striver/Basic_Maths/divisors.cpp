#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the Number: ";
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.emplace_back(i);
            if ((n / i != i))
            {
                v.emplace_back(n / i);
            }
        }
    }
    sort(v.begin(),v.end());
    for (auto it : v) {cout<<it<<" ";}
    return 0;
}