#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
    double salary;
    int experience;

public:
    Employee(int, string, double, int);
    void setEmployeeInfo(int, string, double, int);
    int get_id() { return id; };
    string get_name() { return name; };
    double get_salary() { return salary; };
    int get_experience() { return experience; };
    void display()
    {
        cout << "\tId         : " << id << endl;
        cout << "\tName       : " << name << endl;
        cout << "\tSalary     : " << salary << "$" << endl;
        cout << "\tExperience : " << experience << endl;
    }
    void displayEmployeeInfo()
    {
        cout << "**Display Employee Information:" << endl;
        display();
    }
};

Employee::Employee(int id = 0, string name = "unknown", double salary = 0, int experience = 0)
{
    this->id = id;
    this->name = name;
    this->salary = salary;
    this->experience = experience;
}

void Employee::setEmployeeInfo(int id = 0, string name = "unknown", double salary = 0, int experience = 0)
{
    this->id = id;
    this->name = name;
    this->salary = salary;
    this->experience = experience;
}

// Manager Class
class Manager : public Employee
{
private:
    string department;
    int teamSize;

public:
    Manager(int, string, double, int, string, int);
    void setManagerInfo(int, string, double, int, string, int);
    void updateTeamSize(int s) { teamSize = s; }
    void updateSalary(double s) { salary = s; }
    void displayManagerInfo()
    {
        cout << "**Display Manager Information:" << endl;
        display();
        cout << "\tDepartment : " << department << endl;
        cout << "\tTeamSize   : " << teamSize << endl
             << endl;
    }
};

Manager::Manager(int id = 0, string name = "unknown", double salary = 0, int experience = 0, string department = "undefine", int teamSize = 0) : Employee(id, name, salary, experience)
{
    this->department = department;
    this->teamSize = teamSize;
}
void Manager::setManagerInfo(int id = 0, string name = "unknown", double salary = 0, int experience = 0, string department = "undefine", int teamSize = 0)
{
    setEmployeeInfo(id, name, salary, experience);
    this->department = department;
    this->teamSize = teamSize;
}

int main()
{
    Manager manager(802139, "Waliur Rafiq Sami", 1200, 9, "CSE", 12);
    manager.displayManagerInfo();
    // update teamSize & salary
    manager.updateTeamSize(15);
    manager.updateSalary(manager.get_salary() + 200);
    // print after update teamSize & salary
    cout << "\n#Print after update teamSize & salary\n";
    manager.displayManagerInfo();

    Employee em[10] = {
        {802139, "Waliur Rafiq Sami", 1200, 10},
        {802140, "Md Shan Ahmed", 900, 7},
        {802141, "Md shakil Akhmd", 1100, 8},
        {802142, "Akhi Akter", 900, 7},
        {802143, "Kamaruzzaman Ripon", 1150, 11},
        {802144, "Sunjida Apu", 800, 9},
        {802145, "Oli Ahmed Khan", 300},
        {802146, "Md Manirujjaman", 1500, 13},
        {802147, "Foysal Ahmed", 100, 2},
        {802148, "Siam Akmed", 400, 3}};

    int higherExperience = 0;
    int higherExperienceIndex = 0;
    // Find the high experience employee and set him manager
    for (int i = 0; i < 10; i++)
    {
        if (higherExperience < em[i].get_experience())
        {
            higherExperience = em[i].get_experience();
            higherExperienceIndex = i;
        }
    }
    // update manager
    manager.setManagerInfo(
        em[higherExperienceIndex].get_id(),
        em[higherExperienceIndex].get_name(),
        em[higherExperienceIndex].get_salary(),
        em[higherExperienceIndex].get_experience(),
        "CSE",
        17);
    // print after update manager information
    cout << "\n#Print after update manager information\n";
    manager.displayManagerInfo();

    return 0;
}