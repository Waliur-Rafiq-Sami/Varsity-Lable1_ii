#include <iostream>
using namespace std;

class Shape
{
private:
public:
    void draw()
    {
        cout << "Draw a Shape\n";
    }
};

class Circle : public Shape
{
private:
public:
    void draw()
    {
        cout << "Draw a Circle\n";
    }
};

int main()
{
    Shape sObj;
    Circle cObj;

    sObj.draw();
    cObj.draw();

    return 0;
}