#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int arr[4];
    for (int i = 0; i < 3; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    if (arr[0] + arr[1] == arr[2])
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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