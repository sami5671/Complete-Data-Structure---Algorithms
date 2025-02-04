// Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

#include <bits/stdc++.h> 
using namespace std;

// Functional recursion 
int sum(int n){
    // base base 
   if(n == 0) return 0;
   return pow(n,3) + sum(n-1);
}

int main(){
    int n;
    cin >> n;
    int result = sum(n);
    cout << "Sum of series is: " << result << endl;
    return 0;
}