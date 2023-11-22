#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int sz = s.size();
    int num = stoi(string(1, s[0]));
    if (num == 1 && sz == 1)
    {
        cout << "1\n";
        return;
    }
    cout << 10 * (num - 1) + (sz * (sz + 1) / 2) << '\n';
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