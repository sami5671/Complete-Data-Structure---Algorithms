#include<iostream>
using namespace std;

int print_1_TO_N(int x){

    if (x > 0)
    {
       print_1_TO_N(x-1);
       cout << "Number: " <<  x << endl;
    } 
    
}

int main(){


    int x;
    cin>>x;

    print_1_TO_N(x);

    return 0;
}