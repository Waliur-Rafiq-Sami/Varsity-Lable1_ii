#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> intArray = {0, 5, 8, 9, 2, 4, 7, 3, 6, 1};
    cout << "Elements are : ";
    for (int i : intArray)
    {
        cout << i << " ";
    }

    auto findElement = find(intArray.begin(), intArray.end(), 7);
    findElement != intArray.end()
        ? cout << "\nWOW! Element 7 Found\n"
        : cout << "\nSorry! Not Found\n";

    cout << "After short : ";
    sort(intArray.begin(), intArray.end());
    for (int i : intArray)
    {
        cout << i << " ";
    }

    cout << "\nAfter reverse : ";
    reverse(intArray.begin(), intArray.end());
    for (int i : intArray)
    {
        cout << i << " ";
    }
    return 0;
}
