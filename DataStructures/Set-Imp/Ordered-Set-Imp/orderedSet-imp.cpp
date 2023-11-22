#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(1);                       // [1]
    s.insert(14);                      // [1, 14]
    s.insert(9);                       // [1, 9, 14]
    s.insert(2);                       // [1, 2, 9, 14]
    cout << *s.upper_bound(7) << '\n'; // 9
    cout << *s.upper_bound(9) << '\n'; // 14
    cout << *s.lower_bound(5) << '\n'; // 9
    cout << *s.lower_bound(9) << '\n'; // 9
    cout << *s.begin() << '\n';        // 1
    auto it = s.end();
    cout << *(--it) << '\n';   // 14
    s.erase(s.upper_bound(6)); // [1, 2, 14]
}

// NOte: O(log n)
// Four additional operations:
// begin(), which returns an iterator to the lowest element in the set
// end(), which returns an iterator to the highest element in the set
// lower_bound, which returns an iterator to the least element greater than or equal to some element k,
// upper_bound, which returns an iterator to the least element strictly greater than some element k.