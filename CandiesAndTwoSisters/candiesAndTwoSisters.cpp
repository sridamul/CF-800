#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    double n;
    int ans = 0;
    cin >> n;
    ans = ceil((n / 2) - 1);
    cout << ans << "\n";
    // cout << "Test:" << ceil((n / 2) - 1) << "\n";
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