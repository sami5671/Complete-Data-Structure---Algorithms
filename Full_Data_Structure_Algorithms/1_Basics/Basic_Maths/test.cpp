#include <bits/stdc++.h> 
using namespace std;


int sum_of_divisors(int num){

    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int sum_of_all_divisors(int n){
    int total_sum = 0;

    for (int i = 0; i <= n; i++)
    {
        total_sum = total_sum + sum_of_divisors(i);
    }
    return total_sum;
}

int main(){ 

    int n;
    cin>> n;
    
    int result = sum_of_all_divisors(n);
    cout<<result<<endl;

    return 0;
}