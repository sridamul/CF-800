#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < n; ++i)
    {
        if (s1[i] == 'G' && s2[i] == 'B')
        {
            s2[i] = 'G';
        }
        if (s1[i] == 'B' && s2[i] == 'G')
        {
            s2[i] = 'B';
        }
    }
    if (s1 == s2)
        cout << "YES\n";
    else
        cout << "NO\n";
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