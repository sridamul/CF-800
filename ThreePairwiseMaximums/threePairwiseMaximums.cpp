// https://codeforces.com/problemset/problem/1385/A

#include <bits/stdc++.h>
#define int long long
using namespace std;

// Since, each (a, b or c) appears twice, therefore the max number should appear twice.
// To display max number twice, we need to use the small number twice and then a max number.
// eg: 2, 2, 4 may be a, b and c resp.
// eg: x = 2, y = 4 and z = 4;
// Therefore, it the largest two numbers aren't equal then return "NO" else "YES" and print the small number twice followed by the large number.

void solve()
{
    vector<int> v(3);
    for(int i=0; i<3; ++i) 
    cin >> v[i];
    sort(v.begin(), v.end());
    if(v[1] != v[2])
    cout << "NO\n";
    else {
        cout << "YES\n";
        cout << v[0] << " " << v[0] << " " << v[2] << "\n";
    }
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