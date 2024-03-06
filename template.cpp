// wrrite a programme to find the greatest of two value(using templates)
#include<iostream>
using namespace std;
template<typename T>
T Greater(T arg1,T arg2) 
{
    return arg1>arg2?arg1:arg2;
}
main()
{
    int x=5,y=7;
    cout<<"The greater value is "<<Greater<int>(x,y)<<endl;
    float m=8.5,n=7.2;
    cout<<"The Greater Value is "<<Greater<float>(m,n)<<endl;
    char p='c',q='e';
    cout<<"The Greater value is "<<Greater<char>(p,q)<<endl;

}