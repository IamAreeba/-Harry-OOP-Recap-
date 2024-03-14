#include <iostream>
using namespace std; 

/*
    Constructors:
    When creating class in main we want it to be init their.
    I mean we use func to set data but we can automatically do that using constructor
    We do something with constructor so that these extra functions are eliminated
    Diff btw constructor and member func ? 
    return type

    Chracteristics:
    1. It should be dec in the public section of class
    2. They are automatically invoked when an obj is created
    3. They can not return values and donot have return type
    4. It can have default arguments
    5. We cannot refer to their address



*/

class Complex{
    int a, b;
    public:
        // Creating Constructor
        // Special member func with same name as that of class
        // Used to init objs of class
        // It is automatically invoked(Call/execute) when an obj is created
        Complex(void);   // Constructor declaration

        void printNumber(void){
            cout << "Your Number is: " << a << " + " << b << "i" << endl;
        }

};

Complex :: Complex(void){   // => Default Constructor
    a = 0;
    b = 0;
    cout << "Hello Areeba" << endl;
}

int main(){

    cout << endl;

    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    cout << endl;

    return 0;
}