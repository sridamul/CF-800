#include <bits/stdc++.h>
#define int long long
using namespace std;

int factorial(int n) 
{ 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = min(a, b);
    cout << factorial(ans) << "\n";
    return;

}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}