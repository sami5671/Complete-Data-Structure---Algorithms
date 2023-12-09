// inclusive 
#include<iostream> 
using namespace std;

void printOdd(int number){
    int i = 1;
     cout<<"The Odd number from " << i << " to " << number << " is: ";
    for ( i = 1; i <= number; i++)
    {
        if (i % 2 == 1)
        {
            cout<< i << " ";
        }
    }
}
int main(){

    int n;
    cout<< "Enter the number: ";
    cin>>n;
    printOdd(n);

    return 0;
}