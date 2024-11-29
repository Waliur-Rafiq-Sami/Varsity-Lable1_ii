#include <iostream>
using namespace std;
class B;

class A
{
private:
    int a;

public:
    A(int x = 0) : a(x) {}
    friend int add(A, B);
};

class B
{
private:
    int b;

public:
    B(int y = 0) : b(y) {}
    friend int add(A, B);
};

int add(A a, B b)
{
    return (a.a + b.b);
}

int main()
{
    A a(5);
    B b(8);

    int sum = add(a, b);
    cout << "The sum of a and b is: " << sum << endl;
    return 0;
}