/*
// Syntax for Templates
#include <iostream>
using namespace std;
 
template <class T>
class vector {
    T *arr;
    int size;
    public:
        vector(T* arr){
            //code
        }
        //and many other methods
    
};
 
int main() {
    vector<int> myVec1();
    vector<float> myVec2();
    return 0;
}
*/



/*
//without templates
#include <iostream>
using namespace std;
 
class vector
{
    public:
        int *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new int[size];
        }
    int dotProduct(vector &v){
        int d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    vector v1(3); //vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector v2(3); //vector 2
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}
*/

//With templates
/*
#include <iostream>
using namespace std;
 
template <class T>
class vector
{
    public:
        T *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    vector<float> v1(3); //vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    vector<float> v2(3); //vector 2 with a float data type
    v2.arr[0]=0.1;
    v2.arr[1]=1.90;
    v2.arr[2]=4.1;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}
*/

// Again we write syntax
/*
 #include<iostream>
using namespace std;
 

template<class T1, class T2>
class nameOfClass{
    //body
}

 
int main(){
    //body of main
}


*/


                               // Tamplates With multipe Parameters

       // without templates
/*
#include<iostream>
using namespace std;
class myClass{
    public:
        int data1;
        char data2;
    void display(){
        cout<<this->data1<<" "<<this->data2;
    }
};
*/
        // With Templates
    // first method

  /* #include<iostream>
    using namespace std;

    template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
    void display(){
        cout<<this->data1<<" "<<this->data2;
    }
};
int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();
}
*/
        
       // second method
    
    #include<iostream>
    using namespace std;
    template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
    void display(){
        cout<<this->data1<<" "<<this->data2;
    }
};
int main()
{
    myClass<int, float> obj(1,1.8 );
    obj.display();
}