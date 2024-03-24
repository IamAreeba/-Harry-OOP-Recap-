#include <iostream>
using namespace std; 


/*
    If we are overloading constructors then we can dynamically init constructors
    e.g Taking input from user and then dynamically make objs using constructors

    e.g. If i am transfaring 100RS in bank after 4 months he'll give me 104RS.
         So 4% is Interest Rate
            100RS is Principal Amount value
            1 Year is Period Od Investment
            104RS Return Value

    e.g of loop logic:
        If 100RS then returnValue = 100 if u are put this 100RS in bank for 1 year then loop will run
        1 time and 100RS will be 104RS if interestValue = 0.04
        This Topic is: Compound And Simple Interest

    We have to deine null constructor cuz if we dont make that and if we make any obj and not using that obj it will through error

*/


class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){}
        BankDeposit(int p, int y, float r);      // r can be a value like 0.04
        BankDeposit(int p, int y, int r);        // r can be a value like 14
        void show();

};


BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * ( 1 + interestRate );
    }
    
}


BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = (float)r/100;     
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * ( 1 + interestRate );
    }
    
}

void BankDeposit :: show(){
    cout << "Principal Amount was: " << principal << endl
         << "Return Value after " << years << " years is " << returnValue << endl;  
}

int main(){

    cout << endl;

    BankDeposit BD1, BD2, BD3;
    int p, y;
    float r;       // InterestRate in decimal form
    int R;         // InterestRate in % form

    cout << "Enter the Value of : " << endl;
    cout << "p = ";
    cin >> p ;
    
    cout << "y = ";
    cin >> y ;

    cout << "(Decimal) r = ";
    cin >> r ;

    cout << endl;

    BD1 = BankDeposit(p, y, r);
    BD1.show();

    cout << "======================================================" << endl;

    cout << "Enter the Value of : " << endl;
    cout << "p = ";
    cin >> p ;
    
    cout << "y = ";
    cin >> y ;

    cout << "(int / %) R = ";
    cin >> R ;

    cout << endl;

    BD2 = BankDeposit(p, y, R);
    BD2.show();


    cout << endl;

    return 0;
}