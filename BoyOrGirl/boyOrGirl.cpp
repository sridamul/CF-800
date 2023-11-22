#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, res;
    cin >> str;
    unordered_set<char> seenChars;
    for (char c : str)
    {
        if (seenChars.find(c) == seenChars.end())
        {
            res += c;
            seenChars.insert(c);
        }
    }
    if (res.length() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}