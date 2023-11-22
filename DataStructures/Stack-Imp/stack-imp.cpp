#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(5);
    s.push(2);
    cout << s.size() << endl;
    s.pop();
    cout << s.size() << endl;
    cout << s.top();
}
