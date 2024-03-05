#include<iostream>
using namespace std;

void Print_divisor(int number){

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }
}

bool primeNumber(int n){
    int div = 2;

    for (int i = div; i <=n/2; i++)
    {
        
        if (n % i == 0)
        {
            return false;
        }  
    }
      return true;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (primeNumber(n))
    {
        cout << 1 << " " << n;
    }else{
       Print_divisor(n);
    }
    
    return 0;
}