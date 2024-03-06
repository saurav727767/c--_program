/*
#include<iostream>
using namespace std;

template <class T>
class Saurav
{
public:
    T data;
    Saurav(T a)
    {
        data = a;
    }
    void display()
    {
        cout << data;
    }
};
int main()
{
    Saurav<int> s(5.7);
    cout << s.data << endl;
    s.display();
    return 0;
}
*/
//     OR
/*
#include<iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
 
template <class T>
void Harry<T> :: display(){
    cout<<data;
}

int main()
{
    Harry<int> h(5.7);
    cout << h.data << endl;
    h.display();
    return 0;
}
*/

            //  AND   //


#include <iostream>
using namespace std;
 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    func(4);  //Exact match takes the highest priority
    return 0;
}
