#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    vector<int> v(3);
    for (int i = 0; i < 3; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[1] << "\n";
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