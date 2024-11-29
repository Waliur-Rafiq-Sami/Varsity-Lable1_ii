#include <iostream>
#include <vector>
using namespace std;
class student
{
public:
    int id;
    string name;
    student(int i = 0, string n = "") : id(i), name(n) {}
};
int main()
{
    // make class objects array
    vector<student> stdList = {
        {1, "Waliur Rafiq SAMI"},
        {2, "Siam Ahmed"},
        {3, "Milon Ahmed Mobashir"},
        {4, "Arif Sikdar"}};

    // Print all information
    cout << "**Student Info : " << endl;
    vector<student>::iterator i;
    for (i = stdList.begin(); i != stdList.end(); i++)
        cout << "Id : " << i->id << ", Name : " << i->name << endl;

    // Add new object
    cout << "**After add a new element: " << endl;
    stdList.push_back({5, "SHAN"});
    for (i = stdList.begin(); i != stdList.end(); i++)
        cout << "Id : " << i->id << ", Name : " << i->name << endl;

    // Remove last element
    cout << "**Remove last element: " << endl;
    stdList.pop_back();
    for (i = stdList.begin(); i != stdList.end(); i++)
        cout << "Id : " << i->id << ", Name : " << i->name << endl;

    // Remove first element
    cout << "**Remove first element: " << endl;
    stdList.erase(stdList.begin());
    for (i = stdList.begin(); i != stdList.end(); i++)
        cout << "Id : " << i->id << ", Name : " << i->name << endl;

    return 0;
}