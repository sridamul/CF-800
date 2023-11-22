#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    long double n, p, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        res += p;
    }
    cout << setprecision(14) << res / n << endl;
    return 0;
}