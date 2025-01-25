#include <bits/stdc++.h> 
using namespace std;

void print_number(int n){

    if(n < 1){
        return;
    }
    cout << n << " ";
    print_number(n-1);

}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    print_number(n);

    return 0;
}