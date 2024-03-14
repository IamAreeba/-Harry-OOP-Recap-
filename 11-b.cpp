#include <iostream>
using namespace std; 

/*
    Making function to 2 both classes private data for this we use call by reference
    If i remove & will values be swap or not ? 
    No. Cuz it is making copy exchange(C1 x, c2 y) they are passing data as a copy
*/

class c2;

class c1{
    int val1;
    friend void exchange(c1 &, c2 &);
    public:
        void setVal(int a){
            val1 = a;
        }
        void display(void){
            cout << val1 << endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
        void setVal(int a){
            val2 = a;
        }
        void display(void){
            cout << val2 << endl;
        }
};


/*
Trick  to swap 2 no.s a and b:
temp = a;
a = b;
b = temp;

*/



void exchange(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}



int main(){

    cout << endl;

    c1 oc1;
    c2 oc2;

    oc1.setVal(2);
    oc2.setVal(8);

    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging becomes: " ;
    oc1.display();
    cout << "The value of c2 after exchanging becomes: ";
    oc2.display();


    cout << endl;

    return 0;
}