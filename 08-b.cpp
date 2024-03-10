#include <iostream>
using namespace std; 

/*
Complex No is a 2D vector

*/


class Complex{
    int a;
    int b;
    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(Complex o1, Complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(void){
            cout << "Complex No. : " << a << " + " << b << "i" << endl;
        }



};




int main(){

    cout << endl;

    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    

    cout << endl;

    return 0;
}