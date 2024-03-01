#include <iostream>
using namespace std; 


class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1);    // Declaration
        void getData(){
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of d is " << d << endl;
            cout << "The value of e is " << e << endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}


int main(){

    cout << endl;

    Employee Areeba;
    // Areeba.a = 200;     ==> This will throw error as 'a' is private
    Areeba.d = 150;
    Areeba.e = 100;
    Areeba.setData(10, 20, 30);
    Areeba.getData();
    

    cout << endl;

    return 0;
}