#include <iostream>
using namespace std; 

class Y;

class X{
    int data;
    friend void add(X, Y);

    public:
        void setValue(int value){
            data = value;
        }
};


class Y{
    int num;
    friend void add(X, Y);

    public:
        void setValue(int value){
            num = value;
        }
};

void add(X x, Y y){
    cout << "Summing data of X and Y obj gives me: " << x.data + y.num << endl;
}



int main(){

    cout << endl;

    X x1;
    x1.setValue(5);

    Y y1;
    y1.setValue(9);

    add(x1, y1);

    cout << endl;

    return 0;
}