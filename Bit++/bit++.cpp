#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, x = 0;
    string stm;
    cin >> n;
    while (n--)
    {
        cin >> stm;
        if ((stm == "++X") || (stm == "X++"))
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}