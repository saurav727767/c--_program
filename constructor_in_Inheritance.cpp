//write a programe to implement constructor in inheritance.

#include<iostream>
using namespace std;
class Alpha
{
    public:
    Alpha()
    {
        cout<<"We are in Alpha Class(base class)"<<endl;

    }
};
class Beta:public Alpha
{
    public:
    Beta()
    {
        cout<<"We are in Beta (Derived Class)"<<endl;
    }
};
main()
{
    Beta B1;
}