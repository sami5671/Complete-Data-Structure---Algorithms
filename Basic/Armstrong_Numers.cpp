// digit ar sum is equal to the original number

#include<iostream>
#include<math.h>
using namespace std;

// ---------------------Functions-------------------------------------------

int count_digit(int n){

    int count = 0;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

bool check_Armstrong(int n){

    int sumOfPower = 0;
    int original_number = n;
    int count = count_digit(n);

        while (n > 0)
        {
            int digit = n % 10;
            sumOfPower =  sumOfPower + pow(digit, count);
            n = n / 10;
        }


cout << sumOfPower << endl;


    if (sumOfPower == original_number)
    {
        return true;
    }else{
        return false;
    }
    
}
// ----------------------------------------------------------------

int main(){

    int n;
    cout<< "Enter the Number: ";
    cin >> n;

    if (check_Armstrong(n))
    {
       cout<< "Armstrong Number" << endl;
    }else{
       cout<< "Not Armstrong Number" << endl;
    }
    


    return 0;
}

