#include <bits/stdc++.h>
bool mark[1000001];
#define ll long long
using namespace std;

// goldbach's conjecture says that "each even number no less than four can be expressed as the sum of two primes"
// Our goal is "each integer no less than 12 can be expressed as the sum of two composite numbers" we need to find the two composite number.

void solve()
{
    for (ll i = 2; i <= 1000000; i++)
    {
        if (mark[i] == 0)
        {
            for (ll j = 2 * i; j <= 1000000; j += i)
                mark[j] = 1;
        }
    }
} // function marks the composite numbers as one.
int main()
{
    long long i, x;
    solve();
    while (cin >> x)
    {
        for (i = 4; i <= x - 4; i++)
        {
            if (mark[i] == 1 && mark[x - i] == 1)
            {
                cout << i << " " << x - i << endl;
                break;
            }
        }
    }
    return 0;
}