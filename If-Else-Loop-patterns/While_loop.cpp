#include<iostream>
using namespace std;

int main(){
    int a, b = 10;
    cout<< "Enter a integer value: ";
    cin >> a;

    while (a <= b) //WHILE IT IS TRUE IT WILL PRINT THE MESSAGE
    {
        cout<< a << " ";
        a++;
    }
    return 0;
}