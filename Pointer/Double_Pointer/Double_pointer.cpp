#include<iostream>
using namespace  std;

int main(){


    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout<< endl << endl <<"Running clearly" << endl << endl ;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << &p << endl;
    cout << p2 << endl;

    return 0; 
}