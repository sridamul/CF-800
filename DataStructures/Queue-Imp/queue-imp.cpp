#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(2);
    q.push(4);
    q.pop();
    cout << q.front() << q.back() << q.size();
}