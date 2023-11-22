#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int temp = b - a + 1;
    if (a % 2 != 0 && b % 2 == 0)
    {

        while (temp > 0)
        {
            cout << a << " ";
            cout << b << " ";
            a = a + 2;
            b = b - 2;
            temp -= 2;
        }
    }
    else if (a % 2 == 0 && b % 2 != 0)
    {
        a = a + 1;
        b = b - 1;
        while (temp > 0)
        {
            cout << a << " ";
            cout << b << " ";
            b = b - 2;
            a = a - 2;
            temp -= 2;
        }
    }
    else if (a % 2 == 0 && b % 2 == 0)
    {
        a = a + 1;
        while (temp > 1)
        {
            cout << b << " ";
            cout << a << " ";
            b = b - 2;
            a = a + 2;
            temp -= 2;
        }
        cout << b << " ";
    }
    else if (a % 2 != 0 && b % 2 != 0)
    {
        b = b - 1;
        while (temp > 1)
        {
            cout << a << " ";
            cout << b << " ";
            a = a + 2;
            b = b - 2;
            temp -= 2;
        }
        cout << a << " ";
    }
    return 0;
}