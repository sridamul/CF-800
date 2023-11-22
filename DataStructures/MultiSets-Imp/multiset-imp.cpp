#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(1);                 // [1]
    ms.insert(14);                // [1, 14]
    ms.insert(9);                 // [1, 9, 14]
    ms.insert(2);                 // [1, 2, 9, 14]
    ms.insert(9);                 // [1, 2, 9, 9, 14]
    ms.insert(9);                 // [1, 2, 9, 9, 9, 14]
    cout << ms.count(4) << '\n';  // 0
    cout << ms.count(9) << '\n';  // 3
    cout << ms.count(14) << '\n'; // 1
}

// Note: The time complexity is O(log n + f), f is the number of occurrences of the specified element in the multiset
// These also works similar to the ordered sets and maps.