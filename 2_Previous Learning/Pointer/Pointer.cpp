#include<iostream>
using namespace std;    

int main(){

    int num = 1;
    cout << num << endl;


    int *ptr = &num;
    cout << "Address is: " << ptr << endl;
    cout << "Value is: " << *ptr << endl;


    double num1 = 12.3;
    double *ptr1 = &num1;
    cout << "Address is: " << ptr1 << endl;
    cout << "Value is: " << *ptr1 << endl;

// pointer size will remain static

    cout << "Size of Integer is: " << sizeof(num) << endl;
    cout << "Size of Double is: " << sizeof(num1) << endl;
    cout << "Size of INT pointer is: " << sizeof(ptr) << endl;
    cout << "Size of DOUBLE pointer is: " << sizeof(ptr1) << endl;



// pointer written formate
    int i = 10;


    int  *q = &i; 
    cout << "Address is: " << q << endl;
    cout << "Value is: " << *q << endl;

    int *p = 0;
    p = &i;
    cout << "Address is: " <<  p<< endl;
    cout << "Value is: " << *p << endl;

    return 0;
}