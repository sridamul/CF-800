#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    char temp = str[0];
    temp = toupper(temp);
    str[0] = temp;
    cout << str << endl;
    return 0;
}