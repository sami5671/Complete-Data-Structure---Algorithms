// inclusive 
#include<iostream> 
using namespace std;

int printSumOdd(int number){
    int i = 1 , sum = 0 ;
    for ( i = 1; i <= number; i++)
    {
        if (i % 2 == 1)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main(){

    int n;
    cout<< "Enter the number: ";
    cin>>n;
    cout<< "Sum of the Odd numbers is: "<< printSumOdd(n)<<endl;
    return 0;
}