#include <bits/stdc++.h> 
using namespace std;

// Functional recursion (print factorial of n numbers)
int fact(int n){
    // base base 
    if(n == 0) return 1;

    return n * fact(n-1);
}

int main(){
    int n;
    cin >> n;
    int result = fact(n);
    cout << "Factorial: " << result << endl;
    
}