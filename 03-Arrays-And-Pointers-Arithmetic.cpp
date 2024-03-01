#include <iostream>
using namespace std; 

int main(){

    cout << endl;
    
    // Contiguous block memory associated
    int marks[4] = {23, 45, 66, 89};
    cout << "These are marks: " << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    cout << "========================================================" << endl;
    int mathMarks[4];
    cout << "These are maths marks: " << endl;
    mathMarks[0] = 70;
    mathMarks[1] = 80;
    mathMarks[2] = 90;
    mathMarks[3] = 100;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    cout << "========================================================" << endl;

    // We can change the value of an array
    mathMarks[2] = 95;
    cout << "Changed Array value: " << endl;
    cout << mathMarks[2] << endl;

    cout << "========================================================" << endl;

    // Printing through loops
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << mathMarks[i] << endl;
    }

    // In arrays our name is our address.
    // marks -> address of first block. 
    // &marks WRONG!
    

    cout << "========================================================" << endl;

    // Pointers Arithmetic Formula:    [Add new = Add current + (i * Size of DT)]
    //                                   p+i            p         i
    
    // Pointers And Arrays
    int* p = marks;
    cout << "The value of  *p     is " << *p << endl;
    cout << "The value of  *(p+1) is " << *(p+1) << endl;
    cout << "The value of  *(p+2) is " << *(p+2) << endl;
    cout << "The value of  *(p+3) is " << *(p+3) << endl;

    cout << "========================================================" << endl;

    cout << "The value of  *(p++) is " << *(p++) << endl;
    cout << "The value of  *(p++) is " << *(p) << endl;
    cout << "The value of  *(p)   is " << *(++p) << endl;
    cout << "The value of  *(p)   is " << *(++p) << endl;


    
    

    cout << endl;

    return 0;
}