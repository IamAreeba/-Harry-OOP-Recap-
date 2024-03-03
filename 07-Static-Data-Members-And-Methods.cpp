#include <iostream>
using namespace std; 


/*

Static Var:
    In this program i cant figure out how many obj are created from this Employee class. Cuz every obj has individual count and i cant pass count var from 1 obj to another. So static var solve this problem and it is created outside the class.

    We have to dec count outside the class cuz it is static so it's memory is comming from class not for every obj.
    Count var will take memory single time and update itself
    static var is init by default with 0. We dont had to init it.
    All obj are sharing this count var 
    Static var are also called class var cuz they are atached with class. So it is not an obj property it is class property
    Static var has only 1 copy and that copy is maintained means all objs are sharing it
    Scope/Visibility of static var is inside class
    Lifetime = termination of program 

    If we want to start our static var value = 1000 ao we have to do it outside the class
    Every obj can ust it and modify it

Static Function:
    only static var can access these functions
    Func which is runned with class name
    They only have access of satic var 

Error:
    I have set Ali and Areeba data one by one thats why it was telling me count = 2

*/


class Employee{
    int id; 
    // int count;
    static int count;  

    public:
        void setData(void){
            cout << "Enter the Id: " << endl;
            cin >> id;
            count++;
        }

        void getData(void){
            cout << "Employee Id: " << id << endl;
            cout << "Employee Count: " << count << endl;
        }

        static void getCount(void){
            // cout << id << endl;       // Throws an error
            cout << "The value of count is: " << count << endl;
        }
};



// count is a static data member of class employee
int Employee :: count;     // Default Value = 0
// int Employee :: count = 1000;     // Default Value = 0




int main(){

    cout << endl;

    Employee Areeba, Aiman, Ali;
    // Areeba.id = 1;
    // Areeba.count = 100;     // cannot do this cuz id and count are private var


    
    
    

    Areeba.setData();
    cout << "========================================================" << endl;
    Areeba.getData();
    Employee::getCount();
    

    cout << "========================================================" << endl;
    Ali.setData();
    cout << "========================================================" << endl;
    Ali.getData();
    Employee::getCount();


    cout << endl;

    return 0;
}