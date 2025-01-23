#include <bits/stdc++.h> 
using namespace std;

// optional solution for finding the divisors
 vector <int> all_divisors_found(int n){
    vector<int> divisors;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            // If divisors are not equal, then add the other divisor
            if (n/i != i)
                divisors.push_back(n/i);
        }       
    }
    return divisors;
}
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
    
    // int result = sum_of_all_divisors(n);
    // cout<<result<<endl;

    vector <int> result = all_divisors_found(n);
    for (int i: result)
    {
        cout << i << " ";
    }

    return 0;
}