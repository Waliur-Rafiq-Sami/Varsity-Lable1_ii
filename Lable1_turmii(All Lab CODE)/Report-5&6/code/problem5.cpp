#include <iostream>
using namespace std;

class Vehicle
{
private:
public:
    ~Vehicle() { cout << "Vehicle destroyed" << endl; };
};

class Car : public Vehicle
{
private:
public:
    ~Car() { cout << "Car destroyed" << endl; };
};

int main()
{
    Car toyota;
    return 0;
}