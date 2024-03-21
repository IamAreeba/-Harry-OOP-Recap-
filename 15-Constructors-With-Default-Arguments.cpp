#include <iostream>
using namespace std; 


class Simple{
    int Data1;
    int Data2;
    int Data3;
    public:
        Simple(int a, int b = 0, int c = 9){
            Data1 = a;
            Data2 = b;
            Data3 = c;
        }

        void printData();
};

}




int main(){

    cout << endl;

    Simple s(1, 2);
    s.printData();

    Simple s1(3);
    s1.printData();

    Simple s2(10, 20, 30);
    s2.printData();

    cout << endl;

    return 0;
}