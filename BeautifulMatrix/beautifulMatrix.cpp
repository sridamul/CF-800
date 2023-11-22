#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int arr[5][5], i, j;
    for (int k = 0; k < 5; k++)
    {
        for (int l = 0; l < 5; l++)
        {
            cin >> arr[k][l];
            if (arr[k][l] == 1)
            {
                i = k;
                j = l;
            }
        }
    }
    cout << abs(2 - i) + abs(2 - j) << endl;
    return 0;
}