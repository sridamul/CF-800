#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a;
    int notEven = 0, notOdd = 0;
    cin >> a;
    int arr[a + 1];
    for (int i = 0; i < a; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; ++i)
    {
        if (i % 2 == 0)
        {
            if (arr[i] % 2 == 0)
            {
                continue;
            }
            else
            {
                notEven++;
            }
        }
        else
        {
            if (arr[i] % 2 != 0)
            {
                continue;
            }
            else
            {
                notOdd++;
            }
        }
    }
    if (notEven == notOdd)
    {
        cout << notEven << "\n";
    }
    else
        cout << "-1\n";
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