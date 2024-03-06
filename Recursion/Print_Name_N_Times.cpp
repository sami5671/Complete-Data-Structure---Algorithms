#include<iostream>
using namespace std;
int i = 1;

void print_name(int n, int i){

    // base condition

    if (n < i)
    {
        return;
    }
    cout << "Sami" << endl;

    print_name(n, i + 1);
}

int main(){

    int n;
    cin >> n;

    print_name(n,i);

    return 0;
}