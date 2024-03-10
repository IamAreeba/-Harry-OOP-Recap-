#include <iostream>
using namespace std; 



/*

Complex No is a 2D vector
Friend func is basically the func or class wi=hich is accessing data of other class that class has to dec that func in it own class. But he can only access what ever the dec is for can access other things cuz he is not a member func. He is a foreign func

Properties Of Friend Function:
    1. Not in the scope of class
    2. Since it is not in the scope of  the class, it can't be called from the obj of that class.
        c1.sumComplex() == Invalid
    3. Can be invoked without the help of any obj
    4. Usually contains obj as arg
    5. Usually we make friend fun to access private data of class
    6. Can be  dec inside public and private section of the class
    7. It cannot access the members directly by their names and need objName.memberName to access any 
        member.


*/


class Complex{
    int a, b;
    public: 
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        // Below line means that non member - sumComplex func is allowed to do anything with my private parts (members)
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNumber(void){
            cout << "Complex No. : " << a << " + " << b << "i" << endl;
        }

};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    // cout << a;        //  We dont know which a is this. Is it class 'a' or anyother 'a'
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}


int main(){

    cout << endl;

    Complex c1, c2, sum;

    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    cout << endl;

    return 0;
}