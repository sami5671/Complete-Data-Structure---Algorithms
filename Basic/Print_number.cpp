#include<iostream> 
using namespace std;


void printNumber(int number){
    int i = 1;
     cout<<"The number from " << i << " to " << number << " is: ";
    for ( i = 1; i <= number; i++)
    {
        cout<< i << " ";
    }
    
}
int main(){

    int n;
    cout<< "Enter the number: ";
    cin>>n;
    printNumber(n);

    return 0;
}