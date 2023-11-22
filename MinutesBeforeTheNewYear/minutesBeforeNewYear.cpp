#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int h, m;
    cin >> h >> m;
    int res = (23 - h) * 60 + (60 - m);
    cout << res << "\n";
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