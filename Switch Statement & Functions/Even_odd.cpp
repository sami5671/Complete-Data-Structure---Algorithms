#include<iostream>
using namespace std;

// =================================================================
bool isEven(int x){
    if (x&1)//odd
    {
        return 0;
    }else{
        return 1;
    }
    
}
//  =================================================================

int main(){

    int number;
    cout<< "Enter the number: ";
    cin >> number;

    if (isEven(number))
    {
        cout<< "Number is even"<< endl;
    }else{
        cout<< "Number is odd"<< endl;
    }
    

    return 0;
}