#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, res;
    int ucount = 0, lcount = 0;
    cin >> s;
    for (char c : s)
    {
        if (isupper(c))
        {
            ucount++;
        }
        else
        {
            lcount++;
        }
    }
    if (lcount >= ucount)
    {
        for (char c : s)
        {
            res += tolower(c);
        }
        cout << res << endl;
    }
    else
    {
        for (char c : s)
        {
            res += toupper(c);
        }
        cout << res << endl;
    }
    return 0;
}