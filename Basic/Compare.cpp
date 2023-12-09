#include<iostream>
using namespace std;

void compare(int a, int b){
    if (a>b)
    {
       cout<< "a is greater than b";
    }else{
        cout<< "a is less than b";
    }
}

int main(){

int a, b;
    cout<< "Enter two numbers: "<< endl;
    cin>> a >> b;
    compare(a,b);
    
    return 0;
}