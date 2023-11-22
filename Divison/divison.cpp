#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int rating;
    cin >> rating;
    if (rating >= 1900)
        cout << "Division 1\n";
    else if (rating >= 1600 && rating <= 1899)
        cout << "Division 2\n";
    else if (rating >= 1400 && rating <= 1599)
        cout << "Division 3\n";
    else
        cout << "Division 4\n";
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