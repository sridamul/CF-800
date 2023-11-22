#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m, c;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        if (x > y)
        {
            m++;
        }
        else if (x < y)
        {
            c++;
        }
    }
    if (m > c)
        cout << "Mishka\n";
    else if (c > m)
        cout << "Chris\n";
    else
        cout << "Friendship is magic!^^\n";
    return 0;
}