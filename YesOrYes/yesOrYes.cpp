#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    for (char &c : s)
    {
        c = tolower(c);
    }
    if (s == "yes")
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