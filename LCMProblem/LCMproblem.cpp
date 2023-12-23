#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int l, r;
    cin >> l >> r;
    if(l <= r/2) {
        if(r & 1) {
            cout << r/2 << " " << r - 1 << "\n";
        }
        else
        cout << r/2 << " " << r << "\n";
    }
    else
    cout << "-1 -1\n";
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