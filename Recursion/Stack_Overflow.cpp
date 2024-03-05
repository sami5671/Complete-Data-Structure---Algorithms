#include<iostream>
using namespace std;

int count = 0;

void stack_overflow(){
     
    cout<< "Count: " << count << endl;
    count++;
    stack_overflow();
}

int main(){

    stack_overflow();

    return 0;
}