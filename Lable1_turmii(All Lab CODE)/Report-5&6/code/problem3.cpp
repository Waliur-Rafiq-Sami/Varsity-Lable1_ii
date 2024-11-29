#include <iostream>
using namespace std;

class Animal
{
private:
public:
    void sound()
    {
        cout << "Animal Sound" << endl;
    }
};

class Mammal : public Animal
{
private:
public:
    void sound()
    {
        cout << "Mammal Sound" << endl;
    }
};

class Dog : public Mammal
{
private:
public:
    void sound()
    {
        cout << "Dog Sound" << endl;
    }
};

int main()
{
    Animal a;
    Mammal m;
    Dog d;
    a.sound();
    m.sound();
    d.sound();

    return 0;
}