#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int b = 2;

    bool first = (a==b);
    cout << first << endl;// false

    bool second = (a>b);
    cout << second << endl;// true

    bool third = (a<b);
    cout << third << endl;// false

    bool fourth = (a>=b);
    cout << fourth << endl;// true

    bool fifth = (a<=b);
    cout << fifth << endl;// false

    bool sixth = (a!=b);
    cout << sixth << endl;// true




    return  0;
}