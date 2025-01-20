#include<iostream>
using namespace std;

int count_digit(int n){
    int m, count = 0;
    m = n;


    while (n > 0)
    {
        // extract the digits from n
        int digit = n % 10;
        
        if (digit != 0 && m % digit == 0)
        {
            count++;
        }
        n = n / 10;
    }
    return count;
}
int main(){ 

    int n;
    cin>> n;
    
    int result = count_digit(n);
    cout << result << endl;
}