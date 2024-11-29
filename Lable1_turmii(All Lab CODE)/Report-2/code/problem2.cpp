#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    int id;
    char name[50];
    float cgpa;
};

int main()
{
    struct Student st[3];

    int i = 0;
    do
    {
        int id;
        char name[50];
        float cgpa;
        cout << "Enter " << i + 1 << " student details :\n";
        cout << "\tId : ";
        cin >> id;
        cout << "\tName : ";
        cin >> name;
        cout << "\tcgpa : ";
        cin >> cgpa;

        st[i].id = id;
        strcpy(st[i].name, name);
        st[i].cgpa = cgpa;
        i++;
    } while (i != 3);
    cout << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << " details:\n";
        cout << "\tId : " << st[i].id << endl;
        cout << "\tName : " << st[i].name << endl;
        cout << "\tcgpa : " << st[i].cgpa << endl;
    }

    return 0;
}