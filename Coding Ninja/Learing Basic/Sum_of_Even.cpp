#include<bits/stdc++.h>
using namespace std;

int main(){

    int number, sum1 = 0, sum2 = 0;
    cin>>number;

    while (number != 0)
    {
        int digit = number % 10;
       
        number = number / 10;

        if (digit % 2 == 0)
        {
           sum1 = sum1 + digit;
        }
         else
        {
           sum2 = sum2 + digit;
        }

    }
  
    
    cout<< sum1 << endl;
    cout<< sum2 << endl;

    return 0;
}