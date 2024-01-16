#include<iostream>
using namespace std;

int countBit(int x){

    int count = 0;
    while (x != 0)
    {
        int bit =  x & 1;
        count++;
        x = x >> 1;
    }
    return count;
}

int main(){


    int number;
    cout<< "Enter the number: ";
    cin >> number;

   int result = countBit(number);
   cout << result << endl;
}