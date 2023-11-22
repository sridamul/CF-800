#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(4);               // [4]
    pq.push(2);               // [2, 4]
    pq.push(1);               // [1, 2, 4]
    pq.push(3);               // [1, 2, 3, 4]
    cout << pq.top() << endl; // 4
    pq.pop();                 // [1, 2, 3]
    pq.pop();                 // [1, 2]
    pq.push(5);               // [1, 2, 5]
}

// Note: O(log n)