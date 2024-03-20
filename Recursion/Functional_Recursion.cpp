#include<iostream>
using namespace std;

// Functional recursion
int print_sum(int n){
    

    // base condition
    
    if (n < 1)
    {
        return 0;
    }

    return n + print_sum(n-1);

}

int main (){

    int n;
    cin >> n;
    

    int result = print_sum(n);
    cout << result << endl;

    return 0;   
}
