//wap demostrate construction in drive class.
#include<iostream>
using namespace std;
class Alpha
{
    int x;
    public:
    Alpha(int m)
    {
        x=m;
        cout<<"Class alpha in initilised"<<endl;
    }
    void showx()
    {
        cout<<"The Value of x in alpha is"<<x<<endl;
    }
    
};
class Beta
{
    float y;
    public:
    Beta(int n)
    {
        y=n;
        cout<<"Class Beta in initilised"<<endl;
    }
    void showy()
    {
        cout<<"The value of y in Beta is "<<y<<endl;
    }
};
class gemma:public Alpha,public Beta
{
    int a,b;
       public:
       gemma(int p,float q,int r,int s):
       Alpha(p),
       Beta(q)
       {
          a=r;
          b=s;
          cout<<"The value of a and b are initilised in gemma"<<endl;
       }

       void showab()
       {
        cout<<" The Value of a and b  is"<<a<<""<<b;
       }
};
main()
{
gemma obj1(4,7.5,12,13);
obj1.showx();
obj1.showy();
obj1.showab();
}