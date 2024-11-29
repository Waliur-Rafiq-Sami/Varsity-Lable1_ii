#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
    int id;
    char name[100];
    float price;

public:
    void setDetails(int i, const char *n, float p)
    {
        id = i;
        strcpy(name, n);
        price = p;
    }
    void display()
    {
        cout << "Display Book Information :" << endl;
        cout << "\tId : " << id << endl;
        cout << "\tName : " << name << endl;
        cout << "\tPrice : " << price << endl;
    }
};

int main()
{
    Book b1;
    b1.setDetails(1697, "Dopamine", 367.48);
    b1.display();
    return 0;
}