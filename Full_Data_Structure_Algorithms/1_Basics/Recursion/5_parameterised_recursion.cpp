#include <bits/stdc++.h> 
using namespace std;

void print_sum(int i, int sum){
    // base condition
    if(i < 1){
        cout << sum << endl;
        return;
    }
    print_sum(i-1, sum + i);
}

int main() {
    int i;
    cout << "Enter a number: ";
    cin >> i;
    print_sum(i, 0);
    return 0;
}