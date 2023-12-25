#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int main(){

    long long int number;
    cout<< "Enter the number: ";
    cin>>number;


    unsigned long long int i = 0, ans = 0;

    while (number !=0)
    {
        int lastBit = number & 1;
        ans = (pow(10, i) * lastBit) + ans;
        number = number >> 1;
        i++;

    }
    cout<< "Answer: "<<ans<<endl;

  

    getch();

}