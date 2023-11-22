#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, count;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> a >> b;
        while (a % b != 0)
        {
            count++;
            a++;
        }
        cout << count << endl;
    }
    return 0;
}