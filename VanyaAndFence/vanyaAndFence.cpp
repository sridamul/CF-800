#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, a;
    int res = 0;
    cin >> n >> h;
    while (n--)
    {
        cin >> a;
        if (a > h)
        {
            res += 2;
        }
        else
        {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}