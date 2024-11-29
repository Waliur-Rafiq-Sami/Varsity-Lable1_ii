#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> Set = {1, 2, 3, 1, 1, 4, 5, 6, 7, 7, 8, 1, 9};
    cout << "Visit SET: ";
    for (auto i : Set)
        cout << i << " ";

    // add values
    cout << "\nAfter add 9 and 10: ";
    Set.insert(9); // allready add so don't add that time
    Set.insert(10);
    for (auto i : Set)
        cout << i << " ";

    // remove values
    cout << "\nAfter erase 3 and 9: ";
    Set.erase(3);
    Set.erase(9);
    set<int>::iterator i;
    for (i = Set.begin(); i != Set.end(); i++)
        cout << *i << " ";

    return 0;
}