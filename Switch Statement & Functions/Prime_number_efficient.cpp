#include<iostream>
using namespace std;

// =================================================================
// 1-> prime number
// 0-> not prime number
bool isPrime(int x){

    for (int i = 2; i < x; i++)
    {
       if (x % i == 0)
       {
        return 0;
       }
    }
        return 1;
}
// =================================================================


int main(){
    int number;
    cout<< "Enter the number for checking the number is prime is not: ";
    cin >> number;

    if (isPrime(number))
    {
        cout<< "Number is prime"<< endl;
    }else{
        cout<< "Not prime"<< endl;
    }
    

    return 0;
}