#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, str;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '.')
        {
            str += '0';
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            str += '1';
            i++;
        }
        else if (s[i] = '-' && s[i + 1] == '-')
        {
            str += '2';
            i++;
        }
    }
    cout << str << "\n";
    return 0;
}