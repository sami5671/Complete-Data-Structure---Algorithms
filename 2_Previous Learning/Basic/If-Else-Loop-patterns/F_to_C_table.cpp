// Fahrenheit table

#include<iostream>
using namespace std;

int main(){

    int  C = 0;
    double F, n;

    cout<< "Enter the number: ";
    cin>> n;

    while (C <= n){  
            
        F = (C * 9/5) + 32;
        cout<< C << " Degree Celsius in Fahrenheit is:  "<< F << endl;
        C++;
    }

    return 0;
}