// print 1 to n sum of even numbers

#include<iostream>
using namespace std;

int main(){
    int i = 1, n, sum = 0;
    cout<< "Enter the number: ";
    cin>>n;

    while (i <= n)
    {
       if (i % 2 == 0)
       {
            sum = sum + i;
       }
       i++;
    }
    cout<< "The sum of Even Number is: "<< sum << endl;
    return 0;
}