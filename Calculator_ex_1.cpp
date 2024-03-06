/*
1. Multiple inheritance
2. Public visibility mode
3. Reusability is implemented as we did not write addition, subtraction, trigonometric calculation in hybrid inheritance but inherited from two different classes.
4. Code:
*/
#include <iostream>
using namespace std;
#include <cmath>

class simplecalc{
    protected:
        float a,b;
    public:
        simplecalc(float x, float y){
            a=x;
            b=y;

        }
   

        void show(){
            cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
            cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b<<endl;
            cout<<"The product of "<<a<<" and "<<b<<" is "<<a*b<<endl;
            cout<<"The div of "<<a<<" and "<<b<<" is "<<a/b<<endl;
        }
        
};

class scientificcalc{
    protected:
        float a,b;
    public:
        scientificcalc(float x, float y){
            a=x;
            b=y;
        }
        
        void display(){
            cout<<"The sine of "<<a<<" + "<<b<<" is "<<sin(a+b)<<endl;
            cout<<"The cosine of "<<a<<" + "<<b<<" is "<<cos(a+b)<<endl;
            cout<<"The tangent of "<<a<<" + "<<b<<" is "<<tan(a+b)<<endl;
            cout<<a<<" raised to "<<b<<" is "<<pow(a,b)<<endl;
        }
        
};

class hybridcalc: public simplecalc, public scientificcalc{
    protected:
        float a,b;
    public:
        hybridcalc(float x, float y):simplecalc(x,y),scientificcalc(x,y){
           a=x;
           b=y; 
        }
       
        void calcfunc(){
            show();
            display();
        }
};

int main(){
        float x,y;
        cout<<"Enter 1st number: "<<endl;
        cin>>x;
        cout<<"Enter 2nd number: "<<endl;
        cin>>y;
        hybridcalc saurav(x,y);
        saurav.calcfunc();
    return 0;
}