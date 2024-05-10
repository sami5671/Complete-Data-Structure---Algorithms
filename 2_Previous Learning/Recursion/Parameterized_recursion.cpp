#include<iostream>
using namespace std;

// parameterized recursion
int print_sum(int n, int sum){
    

    // base condition

    if (n < 1)
    {
        return sum;
    }

    print_sum(n-1, sum + n);

}

int main (){

    int n;
    cin >> n;
    

    int result = print_sum(n, 0);
    cout << result << endl;

    return 0;   
}