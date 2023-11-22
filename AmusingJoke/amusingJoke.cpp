#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string newString = s1 + s2;
    sort(newString.begin(), newString.end());
    sort(s3.begin(), s3.end());
    if (newString == s3)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
    return 0;
}