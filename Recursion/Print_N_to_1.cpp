#include<iostream>
using namespace std;
int i = 1;

void print_Number_Linearly(int n, int i){

    if (n < i)
    {
        return;
    }
    cout << n << " ";
    print_Number_Linearly(n-1, i);
    
}

int main (){

    int n;
    cin >> n;

    print_Number_Linearly(n, i);

    return 0;   
}