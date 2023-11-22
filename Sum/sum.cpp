#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> v;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    sort(v.begin(), v.end());
    if (v[0] + v[1] == v[2])
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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