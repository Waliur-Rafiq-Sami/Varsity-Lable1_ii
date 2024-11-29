#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // part - 1
    vector<int> number;
    int n, num;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        number.push_back(num);
    }

    cout << "Number: ";
    for (int i = 0; i < number.size(); i++)
        cout << number[i] << " ";

    // part - 2
    cout << "\nAdd (153,48,78) : ";
    number.push_back(153);
    number.push_back(48);
    number.push_back(78);
    for (int i = 0; i < number.size(); i++)
        cout << number[i] << " ";

    // part - 3
    cout << "\nPop last 2 element : ";
    number.pop_back();
    number.pop_back();
    for (int i = 0; i < number.size(); i++)
        cout << number[i] << " ";

    // part - 4
    cout << "\nResize 10 and gap value 3 : ";
    number.resize(10, 3);
    for (int i = 0; i < number.size(); i++)
        cout << number[i] << " ";

    // part - 5
    cout << "\nInsert 0 in last 3 position : ";
    number.insert(number.end() - 3, 0);
    for (int i = 0; i < number.size(); i++)
        cout << number[i] << " ";

    // part - 6
    cout << "\nPrint use iterator: ";
    vector<int>::iterator it;
    for (it = number.begin(); it != number.end(); it++)
        cout << *it << " ";

    // part - 7
    cout << "\nErase position 5-10 : ";
    number.erase(number.begin() + 5, number.end());
    for (it = number.begin(); it != number.end(); it++)
        cout << *it << " ";

    // part - 8
    vector<int> id = {88, 87, 86, 85, 81};
    cout << "\nPrint id: ";
    for (it = number.begin(); it != number.end(); it++)
        cout << *it << " ";

    // part - 9
    cout << "\nPrint Number after swap : ";
    swap(id, number);
    for (it = number.begin(); it != number.end(); it++)
        cout << *it << " ";

    // part - 10
    cout << "\nPrint id after swap: ";
    for (it = id.begin(); it != id.end(); it++)
        cout << *it << " ";

    return 0;
}