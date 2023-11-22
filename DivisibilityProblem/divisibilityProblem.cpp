#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    int temp;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            temp = a / b;
            temp++;
            cout << (temp * b) - a << endl;
        }
    }
    return 0;
}