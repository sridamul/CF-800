#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // if n is divided by four, it has the solution else it doesn't have the solution.
        n /= 2;
        if (n & 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 1; i <= n; ++i)
        {
            cout << i * 2 << " ";
        }
        for (int i = 1; i < n; ++i)
        {
            cout << i * 2 - 1 << " ";
        }
        cout << 3 * n - 1 << endl;
    }

    return 0;
}