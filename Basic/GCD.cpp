#include <iostream>
using namespace std;

int GCD(int a, int b) {

  int gcd;
  for (int i = 1; i <= min(a, b); i++) {

    if (a % i == 0 && b % i == 0) {

      gcd = i;
    }
  }
  return gcd;
}
int main() {
  int a = 24;
  int b = 84;

  GCD(a, b);

  cout << "GCD IS: " << GCD(a, b) << endl;
}