#include <iostream>
#include <set>
using namespace std;
class student
{
public:
    // public member variable
    int id;
    string name;

    // public member func
    student(int i = 0, string n = "") : id(i), name(n) {};

    // operator overLoaded for <
    bool operator<(const student &s) const
    {
        return id < s.id;
    }
};
int main()
{
    set<student> studentSet = {{3, "Milon Ahmed Mobashir"},
                               {1, "Waliur Rafiq SAMI"},
                               {2, "Siam Ahmed"}};

    cout << "**Visit studentSet: \n";
    for (auto i : studentSet)
        cout << "\tID: " << i.id << ", Name: " << i.name << endl;

    // add values
    cout << "**After insert 2 student: \n";
    studentSet.insert({4, "MR. SAMI"});
    studentSet.insert({5, "Milon Khan"});
    for (auto i = studentSet.begin(); i != studentSet.end(); i++)
        cout << "\tID: " << i->id << ", Name: " << i->name << endl;

    // removes values
    cout << "**After remove 'Milon Ahmed Mobashir' student: \n";
    studentSet.erase(student(3, "Milon Ahmed Mobashir"));
    for (auto i = studentSet.begin(); i != studentSet.end(); i++)
        cout << "\tID: " << i->id << ", Name: " << i->name << endl;
    return 0;
}