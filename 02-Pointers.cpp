#include <iostream>
using namespace std; 

int main(){

    cout << endl;

    // What is Pointer ?  --> DT which holds the address of other DT
    int a = 3;
    int* b = &a;

    // &  ==> (Address of) operator
    cout << "The address of a = " << &a << endl; 
    cout << "The address of a = " << b << endl; 
    

    // *  ==> (value at) Dereference operator
    cout << "The value at address b = " << *b << endl;


    // Pointer to pointer 
    int** c = &b;
    cout << "The Address of b = " << &b << endl;
    cout << "The Address of b = " << c << endl;
    cout << "The value at address c = " << *c << endl;
    cout << "The value at address value_at(value_at(c)) = " << **c << endl;

    cout << endl;

return 0;
}