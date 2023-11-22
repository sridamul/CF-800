#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, int> m;
    m[1] = 5;                   // [(1, 5)]
    m[3] = 14;                  // [(1, 5); (3, 14)]
    m[2] = 7;                   // [(1, 5); (3, 14); (2, 7)]
    m.erase(2);                 // [(1, 5); (3, 14)]
    cout << m[1] << '\n';       // 5
    cout << m.count(7) << '\n'; // 0
    cout << m.count(1) << '\n'; // 1
}

// It is also has O(1)
// Note: In count() functionality, we parse the key instead of the original value.