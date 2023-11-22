#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string s;
    cin >> s;
    for (char c : s)
    {
        if ((c == '4') || (c == '7'))
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}