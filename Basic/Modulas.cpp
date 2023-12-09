#include<iostream> 
using namespace std;

void even_odd(int a){
    if (a % 2 == 0)
    {
       cout<< "The number is even"<<    endl;

    }else{
        cout<< "The number is Odd"<<    endl;
    }
    
}

int main(){
    int a;
    cout<< "Enter a number: ";
    cin>> a;
    even_odd(a);

    return 0;
}