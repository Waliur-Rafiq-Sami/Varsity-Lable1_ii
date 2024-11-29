#include <iostream>
using namespace std;

struct EmployeeStruct
{
    int id;
    char name[50];
    float salary;
};

class EmployeeClass
{
private:
    int id;
    char name[50];
    float salary;

public:
};

class ModifyEmployeeStruct
{
    int id;
    char name[50];
    double salary;
    char department[30];
    char position[20];
};

class ModifyEmployeeClass
{
private:
    int id;
    char name[50];
    double salary;
    char department[30];
    char position[20];

public:
};

int main()
{
    struct EmployeeStruct obS;
    cout << "EmployeeStruct obS size is : " << sizeof(obS) << endl;

    EmployeeClass obC;
    cout << "EmployeeStruct obC size is : " << sizeof(obC) << endl;

    cout << "-------After modify------" << endl;
    struct ModifyEmployeeStruct obMS;
    cout << "EmployeeStruct obS size is : " << sizeof(obMS) << endl;

    ModifyEmployeeClass obMC;
    cout << "EmployeeStruct obS size is : " << sizeof(obMC) << endl;

    return 0;
}