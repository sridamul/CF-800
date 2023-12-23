#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int m, n;
    cin >> m >> n;
    if(m % n == 0) 
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