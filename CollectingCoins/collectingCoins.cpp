#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a[3], n;
    cin >> a[0] >> a[1] >> a[2] >> n;
    sort(a, a + 3);
    n -= 2 * a[2] - a[1] - a[0];
    if (n < 0 || n % 3 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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