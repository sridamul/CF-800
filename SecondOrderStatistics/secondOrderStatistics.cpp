#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> nums;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        nums.insert(num);
    }
    if (nums.size() >= 2)
    {

        set<int>::iterator it = next(nums.begin(), 1);
        // or
        // suto it = next(nums.begin(), 1);
        cout << *it << "\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}