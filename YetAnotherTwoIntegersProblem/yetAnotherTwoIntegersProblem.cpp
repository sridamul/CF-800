#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    int temp = abs(b - a);
    int mod = temp % 10;
    temp = temp - mod;
    int steps = temp / 10;
    if (mod == 0)
    {
        cout << steps << "\n";
        return;
    }
    cout << steps + 1 << "\n";
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