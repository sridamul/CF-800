#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string words[n];
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (words[i].size() >= 10)
        {
            cout << words[i].front() << words[i].size() - 2 << words[i].back() << endl;
        }
        else
        {
            cout << words[i] << endl;
        }
    }
    return 0;
}
