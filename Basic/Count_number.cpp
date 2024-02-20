#include <iostream>
using namespace std;

int count_Number(int n) {

  int count = 0;

  while (n != 0) {
    n = n / 10;
    count++;
  }
  return count;
}

int main() {

  int number;
  cin >> number;

  cout << "The number of digits in the number is: " << count_Number(number);
}