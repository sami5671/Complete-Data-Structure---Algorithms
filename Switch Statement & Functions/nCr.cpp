#include<iostream>
using namespace std;

// =================================================================
int factorial(int x){

    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
       fact = fact * i;
    }
    
    return fact;
}

// =================================================================
int nCr(int x, int y){

      int numerator = factorial(x);
      int denominator = factorial(y) * factorial(x-y);

      return numerator / denominator;
}

//  =================================================================

int main(){

    int n,r;
    cout<< "Enter the value of n & r: ";
    cin>>n>>r;

    int answer = nCr(n,r);
    cout<< "nCr is: "<< answer << endl;

    return 0;
}