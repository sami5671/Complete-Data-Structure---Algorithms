#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

void print_name(int i, int n){
    // set base case
    if (i > n)
    {
        return;
    }
    cout << "sami" << endl;
    print_name(i + 1, n);
}

int main(){
    int n;
    cin>> n;
    print_name(1, n);
    return 0;
}