//============================================================================
// problem link:http://codeforces.com/contest/732/problem/A
//============================================================================

#include <iostream>
using namespace std;

int main()
{
    int value = 0;
    long long priceMade = 0;
    int k, r;
    cin >> k >> r;
    while (true)
    {
        if ((priceMade % 10 == 0 && priceMade != 0) || priceMade % 10 == r)
        {
            break;
        }
        ++value;
        priceMade += k;
    }

    cout << value;

    return 0;
}