// inclusive 
#include<iostream> 
using namespace std;

int printSumEven(int number){
    int i = 1 , sum = 0 ;
    for ( i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
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
    cout<< "Sum of the Even numbers is: "<< printSumEven(n)<<endl;
    return 0;
}