#include<iostream>
using namespace std;

bool check_palindrome(int x){
    
    long int reverse_number = 0;
    int original_number = x;
    int last_digit;

    while (x > 0)
    {
        last_digit = x % 10;
        reverse_number = (reverse_number * 10) + last_digit;
        x = x / 10;
    }
    if (reverse_number == original_number)
    {
        return true;
    }else{
        return false;
    }
}

int main(){ 

    int n;
    cin>> n;
    
    bool result = check_palindrome(n);

    if (result)
    {
        cout << "The number is a palindrome." << endl;
    }else{
        cout << "The number is not a palindrome." << endl;
    }
    
}