#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    if(n <= 2)
    cout << "1\n";
    else {
        cout << (n-3)/x + 2 << "\n";
    }
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