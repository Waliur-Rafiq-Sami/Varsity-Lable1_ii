#include <iostream>
using namespace std;

double division(double i, double j)
{
    try
    {
        if (j == 0)
        {
            string err = "sorry, j = 0 ";
            throw err;
        }
        return i / j;
    }
    catch (string s)
    {
        cout << s << endl;
    }
}

int main()
{
    cout << division(10, 5);

    return 0;
}