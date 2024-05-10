#include <iostream>
using namespace std;

int reverse(int x){

  int reverse = 0;

  while( x != 0){
    int digit = x % 10;
    reverse = reverse *10 + digit;
    x = x/10;
  }
  return reverse;
}

bool check_palindrome(int x){

    int reverse_Number = reverse(x);
    int original_Number = x;

    if(reverse_Number == original_Number){
      return true;
    }else{
      return false;
    }
}

int main() {
     int x;
     cin>> x;

      if(check_palindrome(x)){
        cout<< "The number is a palindrome"<<endl;
      }else{
        cout<< "The number is not a palindrome"<<endl;
      }
    return 0;
}