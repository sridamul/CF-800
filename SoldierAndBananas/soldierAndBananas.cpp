#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    // tot = k(w(w+1)/2)
    int reqTot = k * (w * (w + 1) / 2);
    if ((reqTot - n) <= 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << (reqTot - n) << endl;
    }
    return 0;
}