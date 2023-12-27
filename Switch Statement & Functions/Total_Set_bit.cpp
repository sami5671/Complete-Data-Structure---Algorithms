#include<iostream>
using namespace std;

// =================================================================
int totalSetBit(int x, int y){

    int count_1 = 0, count_2 = 0;

    while (x != 0 | y != 0)
    {
        count_1 = count_1 + (x & 1);
        x = x >> 1;

        count_2 = count_2 + (y & 1);
        y = y >> 1;
    }
    // while (y != 0)
    // {
    //     count_2 = count_2 + (y & 1);
    //     y = y >> 1;
    // }
    return count_1 + count_2;
}
// =================================================================

int main(){

    int a, b;
    cout<< "Enter number a and b: "<< endl;
    cin >> a>> b;

    int result = totalSetBit(a,b);
    cout<< "Total set Bit: "<< result << endl;

    return 0;
}