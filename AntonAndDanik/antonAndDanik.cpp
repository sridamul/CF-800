#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, acount = 0, dcount = 0;
    cin >> n;
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c == 'A')
        {
            acount++;
        }
        else
        {
            dcount++;
        }
    }
    if (acount > dcount)
    {
        cout << "Anton" << endl;
    }
    else if (acount < dcount)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}