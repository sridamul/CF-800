#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int p, v, t, res = 0;
    cin >> n;

    while (n--)
    {
        cin >> p >> v >> t;
        if ((p + v + t) >= 2)
        {
            res += 1;
        }
    }
    cout << res;
    return 0;
}