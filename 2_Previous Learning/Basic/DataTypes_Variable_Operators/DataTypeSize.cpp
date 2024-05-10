#include<iostream>
using namespace std;
int main(){
    int a = 123;
    cout<< a << endl;

    char character = 't';
    cout<< character << endl;

    bool bl = true;
    cout << bl << endl;// 1

    bool b = false;
    cout<< b << endl;// 0

    float f = 1.4;
    cout<< f << endl;

    double d = 1.389;
    cout<< d << endl;

    cout<< "HERE IS THE DATA TYPE SIZE: " <<endl;
    cout<<"Double: " << sizeof(d) << endl;
    cout<< "Float: " << sizeof(f) << endl;
    cout<< "Boolean: " << sizeof(bl) << endl;
    cout<< "Integer: " << sizeof(a) << endl;
    cout<< "Character: " << sizeof(character) << endl;


    return 0;
}