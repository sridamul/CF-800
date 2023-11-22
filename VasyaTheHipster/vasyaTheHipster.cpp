#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " ";
    cout << abs(a - b) / 2 << "\n";
    return 0;
}