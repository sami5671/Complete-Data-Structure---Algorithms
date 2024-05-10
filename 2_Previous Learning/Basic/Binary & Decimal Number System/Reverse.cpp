#include<iostream>

using namespace std;
int main(){

    int n;
    cout<< "Enter the number: ";
    cin>>n;

    int ans = 0;
    int i = 0;
    while (n != 0) 
    {
       int digit = n  % 10;
       ans = (ans * 10) + digit;
       n = n / 10;
    }
    cout<< "Answer: " << ans << endl;
    
    return 0;
}