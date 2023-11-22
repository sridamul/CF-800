#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << "YES\n";
        return;
    }
    sort(arr, arr + n);
    int dif = 0;
    vector<int> v;
    for (int i = 1; i < n; ++i)
    {
        dif = abs(arr[i] - arr[i - 1]);
        v.push_back(dif);
    }
    sort(v.begin(), v.end(), greater<int>());
    if (v[0] > 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
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