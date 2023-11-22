#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> candies(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> candies[i];
    }
    sort(candies.begin(), candies.end());
    int mn = candies[0];
    int ans = 0;
    for (int i : candies)
    {
        ans += abs(i - mn);
    }
    cout << ans << "\n";
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