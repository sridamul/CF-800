#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll temp = pow(2, n);
        cout << temp - 1 << endl;
    }
    return 0;
}