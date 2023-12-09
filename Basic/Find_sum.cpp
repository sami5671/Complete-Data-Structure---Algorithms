// inclusive 
#include<iostream> 
using namespace std;

int printSum(int number){
    int i = 1 , sum = 0 ;
    for ( i = 1; i <= number; i++)
    {
           sum = sum + i;
    }
    return sum;
}
int main(){

    int n;
    cout<< "Enter the number: ";
    cin>>n;
    cout<< "Sum of the numbers is: "<< printSum(n)<<endl;
    return 0;
}