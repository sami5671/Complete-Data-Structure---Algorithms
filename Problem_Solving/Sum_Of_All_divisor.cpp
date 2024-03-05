#include<iostream>
using namespace std;

int Print_divisor_sum(int number){

int sum = 0;


    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;


    int result  =  0;

     for (int i = 1; i <= n; i++)
     {
        result = result + Print_divisor_sum(i);
     }
     
    cout << result << endl;
   
    return 0;
}