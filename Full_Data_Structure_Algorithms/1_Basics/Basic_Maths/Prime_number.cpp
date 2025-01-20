#include<iostream>
using namespace std;

bool check_prime(int n){
   int count = 0;
   for (int i = 1; i <= n; i++)
   {
        if (n % i == 0)
        {
             count++;
        }
   }
   if (count > 2)
   {
    return false;
   }else{
    return true;
   }
   
}
int main(){ 

    int n;
    cin>> n;
    
    bool result = check_prime(n);
    if (result)
    {
        cout << n << " is a prime number." << endl;
    }else{
        cout << n << " is not a prime number." << endl;
    }
    
}