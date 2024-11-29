#include <iostream>
using namespace std;

class Person
{
private:
public:
    Person() { cout << "Person created\n"; };
    ~Person() { cout << "Person destructor\n"; };
};

int main()
{
    Person ob;
    return 0;
}