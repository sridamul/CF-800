#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int sz = s.size();
    if (sz & 1)
    {
        cout << "NO\n";
    }
    else
    {
        string s1 = s.substr(0, sz / 2);
        string s2 = s.substr(sz / 2);
        if (s1 == s2)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
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