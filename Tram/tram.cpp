#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, init = 0;
    vector<int> vi;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        init = init + (b - a);
        vi.push_back(init);
    }
    sort(vi.begin(), vi.end());
    cout << vi.back() << endl;
    return 0;
}