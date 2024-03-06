//WAP use virtual finction.
#include<iostream>
using namespace std;
class  A
{
    public:
    virtual void display()
    {
        cout<<"We are the base class A"<<endl;
    }
};
class B:public A
{
    virtual void display()
    {
        cout<<"We are in derived class B"<<endl;
    }
};
main()
{
    A *ptr;
    A a;
    ptr=&a;
    ptr->display();
    B b;
    ptr=&b;
    ptr->display();
}