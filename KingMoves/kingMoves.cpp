#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    char c;
    cin >> c >> n;
    int cnt = 0;
    if (c == 'a' || c == 'h')
        cnt++;
    if (n == 1 || n == 8)
        cnt++;
    if (cnt == 0)
        cout << "8\n";
    else if (cnt == 1)
        cout << "5\n";
    else if (cnt == 2)
        cout << "3\n";
    return 0;
}