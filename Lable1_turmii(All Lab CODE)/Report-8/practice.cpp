#include <iostream>
using namespace std;

void samiInfo(int id)
{
    cout << "University Id - " << id
         << "\nWelcome to BAUST!\n\n";
}

void samiInfo(int id, string dep)
{
    cout << "University Id - " << id
         << "\nWelcome to " << dep << " Department\n\n";
}

void samiInfo(int id, string dep, string homeTown)
{
    cout << "University Id : " << id
         << "\nDepartment    : " << dep
         << "\nHome Town     : " << homeTown << endl;
}

int main()
{
    samiInfo(802139);
    samiInfo(802139, "CSE");
    samiInfo(802139, "CSE", "Adi Tangail, Dalduar Road, tangail");
    return 0;
}