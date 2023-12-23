
// https://codeforces.com/problemset/problem/1525/A

#include <bits/stdc++.h>
#define int long long
using namespace std;

// POC e/e+w = k/100 => k = x . e where x = 100/e+w => 100 = x (e+w) 
// To minimize the e+w value, one should maximize the value of x
// Max val of x is gcd(k, 100)
// Therefore the min(e+w) would be 100/gcd(k, 100)


void solve()
{
    int k;
    cin >> k;
    int mx = 100;
    int gcd = __gcd(k, mx);
    cout << 100/gcd << "\n";
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