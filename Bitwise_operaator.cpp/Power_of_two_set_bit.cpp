#include<iostream>
#include<math.h>
using namespace std;
// =====================Using set bit============================================
int powerOfTwo(int x) {

    int count = 0;
    while (x != 0)
    {
       int set_bit = x & 1;
       if (set_bit == 1)
       {
         count++;
       }
       x = x >> 1;
    }
    if (count == 1)
    {
        return 1;
    }else{
        return 0;
    }
}
// =================================================================
int main(){

    int number;
    cout<< "Enter A  number: ";
    cin >> number;

    int result = powerOfTwo(number);
    if (result == 1)
    {
       cout<< "yes"<< endl;
    }else{
        cout<< "no"<< endl;
    }
    

    return 0;
}