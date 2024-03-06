//write aprogaramme to simulate class template.

#include<iostream>
using namespace std;
template <class T>
class Test
{
    T answer;
    public:
    Test(T arg)
    {
        answer=arg;
        cout<<"we are in constructor"<<endl;
        cout<<"The value of answer is"<<answer<<endl;
    }
};
int main()
{
    Test <int>T2(2);
    Test <float>T3(5.7);
}