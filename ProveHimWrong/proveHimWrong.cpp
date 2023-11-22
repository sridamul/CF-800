#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// https://codeforces.com/blog/entry/100796

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (pow(3, n - 1) > 1000 * 1000 * 1000)
        {
            cout << "NO\n";
        }
        // else
        // {
        //     cout << "YES\n";
        //     for (ll i = 0; i < n - 1; i++)
        //     {
        //         cout << pow(3, i) << " ";
        //     }
        //     cout << pow(3, (n - 1)) << "\n";
        // }
        else
        {
            cout << "YES\n";
            long long x = 1;
            for (int i = 0; i < n; i++)
            {
                cout << x << " ";
                x *= 3;
            }
            cout << "\n";
        }
    }
    return 0;
}