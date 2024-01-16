#include<iostream>
using namespace std;


int main(){
    int x, y;

    cout<< "Enter the number or any key that you want to get the Ascii value: "<< endl;

// it will give ascii value
    x = cin.get();
    y = cin.get();

    cout<< "Value of a is: "<< x << endl;
    cout<< "Value of b is: "<< y << endl;

if (x>y)
{
    cout<< "a is greater than b"<< endl;
}else{
    cout<< "b is greater than a"<< endl;
}
    return 0;
}