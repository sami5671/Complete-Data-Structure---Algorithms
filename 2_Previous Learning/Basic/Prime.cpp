#include<iostream>
using namespace std;

int primeNumber(int n){
    int div = 2;
    for (int i = div; i <=n/2; i++)
    {
        
        if (n % i == 0)
        {
            return 1;
        }  
    }
      return 0;
}

int main(){
    int number;
    cout<< "Enter the number: ";
    cin>>number;

    if (primeNumber(number) == 1)
    {
    cout<< "Number is not prime";
    }
    else{
    cout<< "Number is prime";
    }


    return  0;
}