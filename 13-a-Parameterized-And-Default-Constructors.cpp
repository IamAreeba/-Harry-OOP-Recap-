#include <iostream>
using namespace std; 


/*
Parametrized Constructor:
It run by default but it takes values from user

Default Constructor:
It run by default

*/

class Complex{
    int a, b;
    public:
        // Creating Constructor
        // Special member func with same name as that of class
        // Used to init objs of class
        // It is automatically invoked(Call/execute) when an obj is created
        Complex(void);   // Constructor declaration
        Complex(int , int);

        void printNumber(void){
            cout << "Your Number is: " << a << " + " << b << "i" << endl;
        }

};

Complex :: Complex(void){   // => Default Constructor as it accespts no param
    a = 0;
    b = 0;
}

Complex :: Complex(int x, int y){   // => This is a parametrized constructor as it takes param from user
    a = x;
    b = y;
}

int main(){

    cout << endl;

    Complex c1;
    c1.printNumber();


    // Implicit Parametrized call
    Complex c2(1, 2);
    c2.printNumber();

    // Explicit Parametrized call
    Complex c3 = Complex(3, 4);
    c3.printNumber();

    cout << endl;

    return 0;
}