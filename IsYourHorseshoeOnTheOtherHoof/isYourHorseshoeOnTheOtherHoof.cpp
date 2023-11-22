#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> s;
    set<int> s1;
    for (int i = 0; i < 4; i++)
    {
        cin >> n;
        s.push_back(n);
        s1.insert(n);
    }
    cout << s.size() - s1.size() << endl;
    return 0;
}