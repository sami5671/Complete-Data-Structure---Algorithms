#include<iostream>
using namespace std;
int main(){

    int n, i= 1, sum = 0;
    cout<< "Enter the number: ";
    cin>> n;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "The sum is: "<< sum << endl;

    return 0;
}


// sum = n/2 (a+l)    formula