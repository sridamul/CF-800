#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool color = false;
    int n, m;
    cin >> n >> m;
    char c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            if (c == 'W' || c == 'B' || c == 'G')
            {
                continue;
            }
            else
            {
                color = true;
                break;
            }
        }
    }
    if (color)
        cout << "#Color\n";
    else
        cout << "#Black&White\n";
    return 0;
}