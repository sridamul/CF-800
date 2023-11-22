#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int time = 4 * 60;
    int availT = 4 * 60 - k;
    int requiredT = 5 * n * (n + 1) / 2;
    while (requiredT > availT)
    {
        --n;
        requiredT = 5 * n * (n + 1) / 2;
    }
    cout << n << "\n";
    return 0;
}