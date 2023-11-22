#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    char c;
    cin >> c;
    string s = "codeforces";
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (c == s[i])
        {
            flag = true;
        }
    }
    if (flag)
        cout << "YES\n";
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