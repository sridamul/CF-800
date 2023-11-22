#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(int n)
{
    bool flag = true;
    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if (!isPrime(m))
    {
        cout << "NO\n";
        return 0;
    }
    for (int i = n + 1; i <= m; i++)
    {
        if (isPrime(i))
        {
            if (i == m)
            {
                cout << "YES\n";
                break;
            }

            else
            {

                cout << "NO\n";
                break;
            }
        }
    }
    return 0;
}