#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int valids;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, persons;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &persons);
        if (persons + k <= 5)
        {
            valids++;
        }
    }
    printf("%d", valids / 3);
    return 0;
}