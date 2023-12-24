#include <bits/stdc++.h>
#define int long long
using namespace std;

// We reduce the first floor apartments, then find out the floor number by n/x, later add one (for first floor)


void solve()
{
    int n, x;
    cin >> n >> x;
    if(n <= 2) 
        cout << "1\n";
    else {
        n -= 2;
        cout << (n+x-1)/x + 1 << "\n"; // ceil(n/x) + 1;
    }
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