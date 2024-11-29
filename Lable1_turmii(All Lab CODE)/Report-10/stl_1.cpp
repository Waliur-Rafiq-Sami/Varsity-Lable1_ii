#include <iostream>
using namespace std;

template <class type1, class type2, class type3>
class student
{
private:
    // int id;
    // string name;
    // int phone;
    // bool isClean;
    // double hight;
    type1 a; // id -> int
    type2 b; // name -> string
    type3 c; // money -> double
    // bool d;
    // double e;

public:
    student(type1 i, type2 j, type3 k)
    {
        a = i;
        b = j;
        c = k;
    };
    void printStu()
    {
        cout << "ID: " << a << ", Name: " << b << ", Money: " << c << endl;
    }
};

int main()
{
    student<int, string, double> ob(1, "arfin", 500.98);
    student<string, string, string> ob2("0802410205101088", "Waliur Rafiq SAMI", "01819802139");
    student<string, string, double> ob3("0802410205101088", "Waliur Rafiq SAMI", 98.3);
    ob.printStu();
    ob2.printStu();
    ob3.printStu();
}
