#include <bits/stdc++.h>
using namespace std;

bool allDigitsDistinct(int number)
{
    std::unordered_set<char> digitSet;
    std::string numStr = std::to_string(number);

    for (char digit : numStr)
    {
        if (digitSet.find(digit) != digitSet.end())
        {
            return false;
        }
        digitSet.insert(digit);
    }

    return true;
}

int main()
{
    int y;
    cin >> y;
    while (!allDigitsDistinct(y + 1))
    {
        y++;
    }
    cout << (y + 1) << endl;
    return 0;
}