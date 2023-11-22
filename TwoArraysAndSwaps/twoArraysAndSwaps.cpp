#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k, sum = 0;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < k; i++)
    {
        if (a[i] < b[i])
            swap(a[i], b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << "\n";
    return;

    // int ans = 0;
    // for (int i = 0; i < n; ++i)
    // {
    //     if (i < k)
    //         ans += max(a[i], b[i]);
    //     else
    //         ans += a[i];
    // }
    // cout << ans << endl;
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