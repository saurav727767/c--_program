#include<iostream>
using namespace std;
class counter
{
   private:
   int count;
   public:
   counter()
   {
    count=0;
   }
   void displaydata()
   {
    cout<<"The value of count variable is "<<count;
   }
   counter operator ++()
   {
    counter temp;
    temp.count = ++ count;
    return temp;

   }
};
main()
{
    counter c1,c2,c3;
    cout<<"Object c1 contains"<<endl;
    c1.displaydata();
     cout<<"Object c2 contains"<<endl;  
    c2.displaydata();
    cout<<"Object c3 contains"<<endl;
    c3.displaydata();
    ++c1;
    ++c2;
    ++c2;
    c3=++c2;
    cout<<"The value of c1 is"<<endl;
    c1.displaydata();
     cout<<"The value of c2 is"<<endl;
    c2.displaydata();
    cout<<"The value of c3 is"<<endl;
    c3.displaydata();
}
