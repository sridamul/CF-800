#include <bits/stdc++.h>
#define int long long
using namespace std;

// POC
// x! + (x-1)! = (x-1)! ( 1 + x )
// Given the max limit is k-1, substitute k-1 in above equation, where you get (k-2)! (k) which is ultimately divided by k.


void solve()
{
    int k;
    cin >> k;
    cout << k - 1 << "\n";
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