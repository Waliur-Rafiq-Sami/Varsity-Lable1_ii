#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearOfManufacture;

public:
    Car()
    {
        brand = "None";
        model = "undefined";
        yearOfManufacture = 0;
    }
    Car(string b, string m, int y)
    {
        brand = b;
        model = m;
        yearOfManufacture = y;
    }
    void setValue(string b, string m, int y)
    {
        brand = b;
        model = m;
        yearOfManufacture = y;
    }
    void updateYear(int y)
    {
        yearOfManufacture = y;
    }
    void Display()
    {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Year Of Manufacture : " << yearOfManufacture << endl
             << endl;
    }
};

int main()
{
    // Assign values to each member variable for an object after declaring the object.
    Car ob;
    ob.Display();

    Car ob1;
    // Assign values to each member variable of an object using a setValue public function.
    ob1.setValue("Toyota", "A7X57", 2007);
    ob1.Display();

    Car ob3("BMW", "C9Y584x", 2019);
    ob3.Display();

    // update year
    ob1.updateYear(2015);
    ob1.Display();
    return 0;
}