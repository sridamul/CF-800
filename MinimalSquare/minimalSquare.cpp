#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    int c = min(a, b);
    int d = max(a, b);
    if (2 * c >= d)
    {
        cout << 4 * c * c << "\n";
    }
    else
    {
        cout << d * d << "\n";
    }
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