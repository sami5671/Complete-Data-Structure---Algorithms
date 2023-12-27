#include<iostream>
using namespace std;

// =================================================================
int Fibonacci(int x){
    int a = 0;
    int b = 1;
    int next;

    cout<< a << " "<< b;
    for (int i = 2; i < x; i++)
    {
        next =  a + b;
        cout<< " "<< next << " ";
        a = b;
        b = next;
    }
   return next;
}

// =================================================================
int main(){

    int n;
    cout<< "Enter the number: ";
    cin >> n;

    int result = Fibonacci(n);
    cout<< "\nNth Fibonacci is: "<< result << endl;
    return 0;   
}