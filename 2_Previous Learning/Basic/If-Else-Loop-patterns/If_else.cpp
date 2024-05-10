#include<iostream>
using namespace std;

int main(){

    int a = 9, b;
    cout<< "Enter a number: "<< endl;
    cin>> b;

    if (b == a)
    {
        cout<< "Wow matched the number Win!!!" << endl;
    }
    else if (b < 0)
    {
        cout<< "Negative number"<< endl;
    }else if (b== 0)
    {
    cout<< "Number is zero"<< endl;
    }
    else{
        cout<< "Positive number"<< endl;
    }
    
    return 0;

}