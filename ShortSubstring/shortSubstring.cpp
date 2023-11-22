#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s, str = "";
    cin >> s;
    str += s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            str += s[i];
            i++;
        }
    }
    str += s[s.size() - 1];
    cout << str << "\n";
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