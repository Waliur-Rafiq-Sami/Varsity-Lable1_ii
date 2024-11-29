#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // part-1
    vector<int> empty;
    // part-2
    vector<int> value0_gor5(5, 0);
    cout << "**Print value0_gor5**" << endl;
    cout << "value0_gor5 useing []: ";
    for (int i = 0; i < value0_gor5.size(); i++)
        cout << value0_gor5[i] << " ";

    cout << "\nvalue0_gor5 useing .at(): ";
    for (int i = 0; i < value0_gor5.size(); i++)
        cout << value0_gor5.at(i) << " ";

    // part-3
    vector<int> v1 = {1, 2, 3, 4, 5};
    cout << "\n\n**Print v1**" << endl;
    cout << "v1 useing []: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\nv1 useing .at(): ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1.at(i) << " ";

    cout << "v1 using range-based for loop: ";
    for (int i : v1)
        cout << i << " ";

    cout << "\nv1 using data() method: ";
    int *p = v1.data();
    for (int i = 0; i < v1.size(); i++)
        cout << *(p + i) << " ";

    // part-4
    vector<int> v2{6, 7, 8, 9, 10};
    cout << "\n\n**Print v2**" << endl;
    cout << "v2 using range-based for loop: ";
    for (int i : v2)
        cout << i << " ";

    cout << "\nv2 using data() method: ";
    p = v2.data();
    for (int i = 0; i < v2.size(); i++)
        cout << *(p + i) << " ";

    return 0;
}