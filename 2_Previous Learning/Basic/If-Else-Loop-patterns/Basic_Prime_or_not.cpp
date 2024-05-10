// simple find prime or not 

#include<iostream>
using namespace std;
int main(){

    int i = 2, n;
    cout<< "Enter the number: ";
    cin >> n;

    while (i < n)
    {
        if (n % i == 0)
        {
           cout<< "Number is not Prime for "<< i<< endl;
        }else{
            cout<< "Number is prime for "<< i<< endl;
        }
        i++;
    }
    return 0;
}