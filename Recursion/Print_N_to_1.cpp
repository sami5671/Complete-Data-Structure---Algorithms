#include<iostream>
using namespace std;


void print_Number(int n){

    if (n < 1)
    {
        return;
    }
    cout << n << " ";
    print_Number(n-1);
}

int main (){

    int n;
    cin >> n;

    print_Number(n);

    return 0;   
}