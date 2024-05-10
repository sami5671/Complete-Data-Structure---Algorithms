#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the number: ";
    cin >> n;

    int a = 0, b = 1;
    cout << a << " " << b << " ";

    
    for (int i = 1; i <=n; i++)
    {
       int nextValue = a + b;
       cout << nextValue << " ";
       a = b;
       b = nextValue;
    }
    

    return 0;
}