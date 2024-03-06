#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Saurav Kumar";
    // Opening files using constructor and writing it
    ofstream out("sample60r.txt"); // Write operation
    out<<st;

    return 0;
}
