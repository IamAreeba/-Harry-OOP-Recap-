#include <iostream>
using namespace std;

/*

By default scope is local in functions.
By default decimal no is double we have to specify that if we want it to be double

*/

int c = 45;

int main(){

    cout << endl;

    //  ============================== Builtin DataTypes ============================
    
    // int a, b, c;
    // cout << "Enter the value of a: " << endl;
    // cin >> a;
    // cout << "Enter the value of b: " << endl;
    // cin >> b;
    // c = a + b;
    // cout << "Sum of a + b = " << c << endl; 

    // cout << "The Global value of c is " << ::c << endl;


    // ======================== float, double, Long double Literals ====================

    // float d = 34.4f;
    // long double e = 34.4l;

    // cout << "The Value of d = " << d << endl << "The value of e = " << e << endl;
    // cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    // cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    // cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L is " << sizeof(34.4L) << endl;


    // =========================== Reference Variables  =================================

    // Rohandas  ---> Monty  --->  Rohu --->   Dangerous Coder
    // In this var is not copied but var is called by diff name like x and y e.g. above
    float x = 455;
    float &y = x;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    
    // =========================== Typecasting =================================
    int a = 45;
    float b = 45.88;
    cout << "The value of a = " << (float)a << endl;
    cout << "The value of b = " << float(a) << endl;
    cout << "The value of a = " << (int)b << endl;
    cout << "The value of a = " << int(b) << endl;

    int c = int(b);
    cout << "The expression is = " << a + b << endl;
    cout << "The expression is = " << a + int(b) << endl;


    cout << endl;

    return 0;
}