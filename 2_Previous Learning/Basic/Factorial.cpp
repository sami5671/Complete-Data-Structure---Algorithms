#include<iostream>
using namespace std; 

int PrintFactorial(int n){
    int i, result = 1;
    for ( i = 1; i <= n; i++)
    {
       result = result * i;
    }
    return result;
}

int main(){
    int number;
    cout<< "Enter the number: ";
    cin >> number;

    cout<< "The factorial of the number is: "<< PrintFactorial(number);
    return 0;
}