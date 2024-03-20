#include <iostream>
using namespace std;

/*
    classes can have multiple constructors

*/

class Complex
{
    int a, b;

public:
    // Default Constructor
    Complex()
    {
        a = 0;
        b = 0;
    }
    // Parametrized Constructor
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber(void)
    {
        cout << "Your Number is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    cout << endl;

    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();

    cout << endl;

    return 0;
}