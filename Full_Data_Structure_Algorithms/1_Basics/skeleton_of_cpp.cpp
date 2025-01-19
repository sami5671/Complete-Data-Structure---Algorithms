#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    if(num1 > num2){
        cout << "The larger number is: " << num1;
    } else if(num1 < num2){
        cout << "The larger number is: " << num2;
    } else {
        cout << "Both numbers are equal.";
    }
    
    return 0;
}