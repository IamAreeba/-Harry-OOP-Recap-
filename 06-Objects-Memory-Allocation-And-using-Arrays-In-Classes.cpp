#include <iostream>
using namespace std; 


/*
When we write class it takes memory.
The things which are common for every obj compiler will store it once in memory.
Member functions are common so the'll come in common memory  

*/


class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
        void initCounter(void) { counter = 0; };
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void){
    cout << "Enter Id of your Item: " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your Item: " << endl;
    cin >> itemPrice[counter];
    counter++;
};

void Shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of Item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
    
}






int main(){

    cout << endl;

    // Driver Program
    int noOfItems;
    cout << "How many Items u wamt to add in your shop: " << endl;
    cin >> noOfItems;
    Shop Zomato;
    Zomato.initCounter();
    for (int i = 0; i < noOfItems; i++)
    {
        Zomato.setPrice();
    }
    
    Zomato.displayPrice();

    cout << endl;

    return 0;
}