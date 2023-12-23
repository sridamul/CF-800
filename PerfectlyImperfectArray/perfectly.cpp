#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isPerfectSquare(int number) {
    int squareRoot = sqrt(number);

    return squareRoot * squareRoot == number;
}

void solve()
{
    int n;
    cin >> n;
    bool ok = true;
    for(int i=0; i<n; ++i) {
        int temp;
        cin >> temp;
        ok &= isPerfectSquare(temp);
    }
    if(ok) 
    cout << "NO\n";
    else
    cout << "YES\n";
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