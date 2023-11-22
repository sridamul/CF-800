#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5];
    for (int i = 1; i < 5; ++i)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '1')
            sum += arr[1];
        else if (s[i] == '2')
            sum += arr[2];
        else if (s[i] == '3')
            sum += arr[3];
        else if (s[i] == '4')
            sum += arr[4];
    }
    cout << sum << "\n";
    return 0;
}