#include<iostream>
using namespace std;

int reverse_number(int n){
    
    int rev_num = 0;
    while (n > 0)
    {
       int lastDigit = n % 10;
       rev_num = (rev_num * 10) + lastDigit;
       n = n / 10;
    }
    return rev_num;
}
int main(){ 

    int n;
    cin>> n;
    
    int result = reverse_number(n);
    cout << result << endl;
}