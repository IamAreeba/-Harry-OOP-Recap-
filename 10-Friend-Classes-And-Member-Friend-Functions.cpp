#include <iostream>
using namespace std; 

/*
    If we are making class or its function as friend that class has to be dec first 
    Forward dec is only saying that class will be their but this dec is not guranting that that the data u are using of that class is their. So we define func outside the class using ::
*/


// Forward Declaration
class Complex;


class Calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }

        // Only dec no def. If i give def so basically i am using that class which hasn't defined yet.
        int sumRealComplex(Complex , Complex );

        int sumImgComplex(Complex , Complex);
};


class Complex{
    int a, b;

    // Individually declaring functions as friends
    // friend int Calculator :: sumRealComplex(Complex , Complex );
    // friend int Calculator :: sumImgComplex(Complex , Complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class Calculator;

    public: 
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(void){
            cout << "Complex No. : " << a << " + " << b << "i" << endl;
        }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return (o1.a + o2.a);
}


int Calculator :: sumImgComplex(Complex o1, Complex o2){
    return (o1.b + o2.b);
}



int main(){

    cout << endl;
    Complex c1, c2;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(3, 4);
    c2.printNumber();

    Calculator calc;
    int resultReal = calc.sumRealComplex(c1, c2);
    int resultImg = calc.sumImgComplex(c1, c2);

    cout << "Sum of Real Part of c1 and c2 is : " << resultReal << endl;
    cout << "Sum of Img Part of c1 and c2 is : " << resultImg << "i" << endl;
    

    cout << endl;

    return 0;
}