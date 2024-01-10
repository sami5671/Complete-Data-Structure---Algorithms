#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    // space
    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    // star
    for (int m = 0; m < 2*n -(2*i + 1) ; m++) {
      cout << "*";
    }

    // space
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    cout << endl;
  }

  return 0;
}