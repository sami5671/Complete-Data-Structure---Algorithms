#include <iostream>
using namespace std;

int main() {

  int number;
  cin >> number;

  int reverse = 0;

  while (number != 0) {

    int digit = number % 10;
    reverse = reverse * 10 + digit;
    number = number / 10;
  }

  cout << "Reversed number is: " << reverse << endl;

  return 0;
}