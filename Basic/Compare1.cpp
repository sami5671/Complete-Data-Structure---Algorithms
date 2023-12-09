#include<iostream>
using namespace std;

void positive_negative_zero(int number){
    if (number > 0)
    {
       cout<< "Number is positive";
    }else if (number < 0)
    {
        cout<< "Number is Negative";
    }else{
         cout<< "Number is Zero";
    }
}

int main(){

    int a;
    cout<< "Enter a number: ";
    cin>> a;
    positive_negative_zero(a);

    return 0;
}