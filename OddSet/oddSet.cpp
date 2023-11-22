#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, oddC = 0, evenC = 0;
    cin >> n;
    vector<int> v(2 * n);
    for (auto &i : v)
    {
        cin >> i;
        if (i & 1)
            oddC++;
        else
            evenC++;
    }
    if (oddC == evenC)
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