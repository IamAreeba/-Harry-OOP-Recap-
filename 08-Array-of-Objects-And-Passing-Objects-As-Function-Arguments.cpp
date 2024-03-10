#include <iostream>
using namespace std; 


/*
If the no of employees increased then it is idle to make a company and make array of it
Class means we are defining a new DT

We can also give obj to func. We can also give arg to static method 

*/

class Employee{
    static int count;
    int id;
    int salary;
    public:
        void setId(void){
            salary = 120;
            cout << "Enter Id of Employee: " ;
            cin >> id;
            ++count;
        }

        void getId(void){
            cout << "Employee Id: " << id << endl;
        }

        static void getCount(void){
            cout << "Employee Count: " << count << endl;
        }
};

int Employee :: count;


int main(){

    cout << endl;

    // Employee Areeba, Aiman, Ali;
    // Areeba.setId();
    // Areeba.getId();

    Employee fb[4];   // fb 100 employees
    for (int i = 0; i < 4; i++)
    {   
        cout << "========================================================" << endl;

        fb[i].setId();
        fb[i].getId();
        Employee::getCount();
    }
    
    cout << "========================================================" << endl;
    

    cout << endl;

    return 0;
}