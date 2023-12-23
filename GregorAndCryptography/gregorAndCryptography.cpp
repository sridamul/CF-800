#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int p;
    cin >> p;
    if(p == 5) {
        cout << 2 << " " << 4 << "\n";
        return;
    }
    cout << 2 << " " << p/2 << "\n";
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