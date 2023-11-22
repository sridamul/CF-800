#include <bits/stdc++.h>
#define int long long
using namespace std;

// https://codeforces.com/problemset/problem/1311/A

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        int dif = abs(a - b);
        if (dif % 2 == 0)
        {
            cout << "1\n";
            return;
        }
    }
    else if (a < b)
    {
        int dif = abs(a - b);
        if (dif & 1)
        {
            cout << "1\n";
            return;
        }
    }
    else
    {
        cout << "0\n";
        return;
    }
    cout << "2\n";
    return;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}