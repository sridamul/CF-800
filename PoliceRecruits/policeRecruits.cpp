#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// The intuition here is, we check whether the police count is > 0 , if greater then reduce the count by 1, else increase the count of untreated crime by 1,
// if the user value is not -1, then we increment the police count by e(user value),

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, e;
    int p = 0, c = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> e;
        if (e == -1)
        {
            if (p > 0)
                p--;
            else
                c++;
        }
        else
            p += e;
    }

    cout << c << endl;
    return 0;
}