/* Saurav Paul */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> math, prog, pe;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            prog.push_back(i);
        else if (x == 2)
            math.push_back(i);
        else if (x == 3)
            pe.push_back(i);
    }
    int ans = min(math.size(), min(prog.size(), pe.size()));
    cout << ans << endl;
    for (int i = 0; i < ans; i++)
    {

        cout << math[i] << " " << prog[i] << " " << pe[i] << endl;
    }
}