#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, count = 0;
    cin >> m >> n;
    while (m <= n)
    {
        m = 3 * m;
        n = 2 * n;
        ++count;
    }
    cout << count << endl;
    return 0;
}