#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y, w;
    cin >> y >> w;
    int check = max(y, w);
    int chances = 6 - check + 1;
    int gcd = __gcd(chances, 6);
    cout << chances / gcd << "/" << 6 / gcd << "\n";
    return 0;
}