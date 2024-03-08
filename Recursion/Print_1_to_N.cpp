#include<iostream>
using namespace std;
int i = 1;
void print_Number_Linearly(int n, int i){

    if (n < i)
    {
        return;
    }
    cout << i << " ";
    print_Number_Linearly(n, i+1);
    
}

int main (){

    int n;
    cin >> n;

    print_Number_Linearly(n, 1);

    return 0;   
}