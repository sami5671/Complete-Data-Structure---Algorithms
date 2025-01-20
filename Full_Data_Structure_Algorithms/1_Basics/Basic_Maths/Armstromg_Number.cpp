#include<iostream>
#include<math.h>
using namespace std;

bool check_armstrong(int n){
    int count = 0;
    int original_number = n;
    int duplicate_number = n;
    int last_digit;
    int sum = 0;

    // counting the number of digits
    while (n > 0)
    {
        last_digit = n % 10;
        count++;
        n = n / 10;
    }

    // sum the number of digits with (count pow)
    while (duplicate_number > 0)
    {
        int last_digit = duplicate_number % 10;
        sum = sum + pow(last_digit, count);
        duplicate_number = duplicate_number / 10;
    }

    // match the sum with original number for Armstrong number
    if(sum == original_number){
        return true;
    }else{
        return false;
    }
}
int main(){ 

    int n;
    cin>> n;

    bool result = check_armstrong(n);
    if (result)
    {
        cout << "The number is a Armstrong number." << endl;
    }else{
        cout << "The number is not a Armstrong number." << endl;
    }
}