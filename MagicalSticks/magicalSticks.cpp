#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int ans = 0, n;
    cin >> n;
    ans = n / 2;
    if (n % 2 == 1)
        ans++;

    cout << ans << endl;
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