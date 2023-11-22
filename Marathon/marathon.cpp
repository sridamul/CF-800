#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int arr[5], count = 0;
    for (int i = 0; i < 4; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < 4; ++i)
    {
        if (arr[0] < arr[i])
        {
            count++;
        }
    }
    cout << count << "\n";
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