#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

// optimal solution
bool optimalSolution(int n) {
    int count = 0;

	if(n == 0 || n == 1){
		return false;
	}else{
		for (int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            count++;
            if (n/i != i)
            {
                count++;
            }
        }
    }
    if (count > 2)
    {
        return false;
    }else{
        return true;
    }
	}
}

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
    
    bool result = optimalSolution(n);
    if (result)
    {
        cout << n << " is a prime number." << endl;
    }else{
        cout << n << " is not a prime number." << endl;
    }
    
}