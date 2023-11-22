#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str1, str2;
    string s1, s2;
    cin >> str1 >> str2;
    for (char c : str1)
    {
        s1 += toupper(c); // Convert each character to uppercase
    }
    for (char c : str2)
    {
        s2 += toupper(c); // Convert each character to uppercase
    }

    int res = s1.compare(s2);
    if (s1 == s2)
        cout << "0" << endl;
    else if (s1 > s2)
        cout << "1" << endl;
    else
        cout << "-1" << endl;
    return 0;
}