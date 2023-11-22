#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, a, b;
    cin >> n;
    if (n % 3 == 1)
    {
        a = n / 3;
        a++;
        b = n / 3;
    }
    else if (n % 3 == 2)
    {
        a = n / 3;
        b = n / 3;
        b++;
    }
    else
    {
        a = n / 3;
        b = n / 3;
    }
    cout << a << " " << b << "\n";
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