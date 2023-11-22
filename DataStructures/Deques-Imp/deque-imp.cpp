#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d; // pronounce as "deck" - double ended queue.It is the combination of stack and queue

    d.push_back(1);  // adds element to the last
    d.push_front(2); // adds element to the first
    d.pop_back();    // removes element from the last
    d.pop_front();   // removes element from the first
}