#include <bits/stdc++.h>
#define int long long
using namespace std;

// TLE

void solve()
{
    int n;
    cin >> n;
    int mx = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j < i; j++)
        {
            int gcd = __gcd(j, i);
            mx = max(mx, gcd);
        }
    }
    cout << mx << "\n";
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