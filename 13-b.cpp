#include <iostream>
using namespace std; 

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout << "The point is (" << x << ", " << y << ")" << endl;
        }
};


// Question: 
// Create a function (Hint: Make it a friend function) which takes 2 point objs and computes the distance btw those 2 points
// Use these e.g. to check your code
// Distance btw (1, 1) and (1, 1) is 0
// Distance btw (0, 1) and (0, 6) is 0
// Distance btw (1, 0) and (70, 0) is 69





int main(){

    cout << endl;

    Point p1(1, 2);
    p1.displayPoint();

    Point p2(3, 4);
    p2.displayPoint();


    cout << endl;

    return 0;
}