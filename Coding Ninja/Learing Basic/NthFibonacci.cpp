#include<bits/stdc++.h>
using namespace std;

int main(){
    int number, a,b, next;
    cin>> number;

    a = 1;
    b = 1;

    
    for (int i = 3; i <= number; i++)
    {
        next = a + b;
        a = b;
        b = next;
        
    }
    cout<< b << " ";
    return 0;
}