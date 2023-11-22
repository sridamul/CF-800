#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(1); // [1]
    s.insert(4); // [1, 4] in arbitrary order
    s.insert(2); // [1, 4, 2] in arbitrary order
    s.insert(1); // [1, 4, 2] in arbitrary order
    // the add method did nothing because 1 was already in the set
    cout << s.count(1) << endl; // 1
    s.erase(1);                 // [2, 4] in arbitrary order
    cout << s.count(5) << endl; // 0
    s.erase(0);                 // [2, 4] in arbitrary order
    // if the element to be removed does not exist, nothing happens
    for (int element : s)
    {
        cout << element << " ";
    }
    cout << endl;
}

// Note: In UnOrdered Set, the elements are in the arbitrary order and uses hashtable to store and retrieve the values.
// Note: O(1)