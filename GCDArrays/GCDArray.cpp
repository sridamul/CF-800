#include <bits/stdc++.h>
#define int long long
using namespace std;

// To make the GCD > 1, we have to choose the most common prime factor and multiple them with the numbers which don't have them.
// Since the numbers are consecutive, the prime factor is 2.
// Hence the minimum number of moves is to calculate the number of odd numbers in the array
// If Min number of moves < k ? "YES" : "NO"


// Note: To find the number of even numbers in the given range, we use r/2 - (l-1)/2

void solve()
{
    int l, r, k;
    cin >> l >> r >> k;
    int range = r - l + 1;
    int oddCount = range - (r/2 - (l-1)/2);
    if(l == r) {
        if(l == 1) 
        cout << "NO\n";
        else
        cout << "YES\n";
        return;
    }
    if(oddCount <= k)
    cout << "YES\n";
    else
    cout << "NO\n";
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