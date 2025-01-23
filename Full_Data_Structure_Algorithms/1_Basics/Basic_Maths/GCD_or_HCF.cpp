// C++ program to find GCD of two numbers
#include <bits/stdc++.h>
using namespace std;
// optimal solution
// int optimalSolution(int n1, int n2){

// };
int betterSolution(int n1, int n2){

    while(n1 > 0 && n2 > 0){
        if(n1 > n2){
            n1 = n1 - n2;
            n2 = n2;
        }else{
            n2 = n2 - n1;
            n1 = n1;
        }
    }
    if (n1 == 0)
    {
        return n2;
    }else{
        return n1;
    }
}
// 
// Function to return gcd of a and b
int Naive_approach_gcd(int n1, int n2)
{

    int gcd = 1;

    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    
    // Return gcd of a and b
    return gcd;
}

// Driver code
int main()
{
    int n1, n2;
    cin>> n1;
    cin>> n2;
    int result = betterSolution(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is "<< result;

         return 0;
}