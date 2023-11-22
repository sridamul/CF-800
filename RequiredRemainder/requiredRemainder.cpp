#include <bits/stdc++.h>

// https://codeforces.com/blog/entry/79517

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        if (n - n % x + y <= n) // we find the remainder of the existing element and then we deduce that from the original one and then add the remainder of new element to it.
        {
            cout << n - n % x + y << endl;
        }
        else
        {
            cout << n - n % x - (x - y) << endl;
        }
    }

    return 0;
}