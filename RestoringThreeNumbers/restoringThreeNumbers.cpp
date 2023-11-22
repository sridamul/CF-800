#include <bits/stdc++.h>
using namespace std;

// (a+b+c) - (b+a) = a
// (a+b+c) - (a+c) = b
// (a+b+c) - (a+b) = c

int main()
{
    int a[5];
    for (int i = 0; i < 4; i++)
        cin >> a[i];

    sort(a, a + 4);
    for (int i = 0; i < 3; i++)
        cout << a[3] - a[i] << " ";
    cout << endl;
}