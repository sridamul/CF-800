#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    cout << "Unsorted"
         << "\n";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << endl; // prints the values in the vector using the pointer
    }
    cout << "Sorted"
         << "\n";
    sort(v.begin(), v.end());
    for (auto element : v)
    {
        cout << element << "\n"; // prints the values in the vector
    }
}

// vector.pushback(e) - add element to the vector
// vector.erase(start, end) - removes element between the given constraints
// vector.popback(e) - removes the last added element to the vector

// Note: First and Last Element's deletion or insertion requires only O(1) else O(n).