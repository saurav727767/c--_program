/* Create two classes :
1. SimmpleCalculator- Takes input of 2 number using a utility function and perfoms +,-,*,/
and displays the result using another function
2. ScientificCalculator - Takes input of 2 numbers using a utility functionand performs any four scientific operations
of your choice and displays the results using another functions

create a class hybridcalculator and inhherit it usinng these 2 classes:
Q1. What type of inheritance you are using ?--> Multiple
Q2. Which mode of inheritance are you using?--> public
Q3. Create an object of hybridcalculator and displaybresults of simple and scientific calculator.
Q4. Hpw is code reusibility implemented?
*/
#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{
public:
    int a;
    int b;
    char c;
    void getdata()
    {

        cout << "Enter the two number "<<endl;
        cin >> a >> b;
    }
    void oprate()
    {
        cout << "Enter the operator (+,-,*,/)  :  ";
        cin >> c;
        
        switch (c)
        {
        case '+':
            cout <<"The sum of  both number = " <<a + b;
            break;

        case '-':
            cout <<"The diff of  both number = " <<a - b;
            break;

        case '*':
            cout <<"The multiplication of  both number = "<< a * b;
            break;

        case '/':
            if (b>0)
            {
            cout <<"The division of  both number = " <<a / b;
                
            }
            else cout<<"it is not divisible ";
            
            break;

        default:
        cout<< " Invalid operator ";
            break;
        }
    }
};
class scientificcalculator{
    public:
    int x;
    char y;
    void getdata(){
        cout<<"Enter the number:  ";
        cin>>x;
    }
    void oprate(){
         cout<<"use this letters for above operators:\n"
         <<"(log= l,   sqrt= s,     exp= e and cos = c ) \n";
         cout<<"Enter the operator (log, sqrt, exp, cos): ";
    
    cin>>y;
    
    switch (y)
    {
    case 'l':
    cout<< "The log of the given number is = "<<log (x);
        
        break;
        case 's':
        cout<<"The square root of the given number is = " <<sqrt (x);
        break;
        case 'e':
        cout<< "The exponent of the given number is = "<<exp(x);
        break;
        case 'c':
        cout<<"The cos of the given number is = "<< cos(x);
        break;
    
    default:
    cout<<"Invalid Operator ";
        break;
    }
    }
};

class hybridcalculator : public simplecalculator, public scientificcalculator{
    public:
    char d;
    void choose(){
        cout<<"For Simple calculator (press s) & For Scientific calculator (press c): ";
        cin>>d;
        switch (d)
        {
        case 's':
            simplecalculator::getdata();
            simplecalculator::oprate();
            break;
    
        case 'c':
            scientificcalculator::getdata();
            scientificcalculator::oprate();
            break;
        default:
        cout<<" Invalid character";
            break;
        }
    }
};
int main()
{
hybridcalculator calc;
calc.choose();
    return 0;
}
