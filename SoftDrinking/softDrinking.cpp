#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// https://codeforces.com/problemset/problem/151/A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k * l / nl, c * d), p / np) / n << endl;
    return 0;
}