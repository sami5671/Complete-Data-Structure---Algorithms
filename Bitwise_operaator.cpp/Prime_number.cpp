#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
       if (n%2 == 0)
       {
            // cout << "The number is not a prime number"<<endl;
            isPrime = 0;
            break;
       }
       
    }
    
    if (isPrime == 1)
    {
        cout<< n << " Number is prime"<<endl;
    }else{
        cout<< n << " Number is not prime"<<endl;
    }
    

    return 0;
}