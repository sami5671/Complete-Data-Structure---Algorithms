#include<iostream>
using namespace std;

// =================================================================
int AP(int x){

    int calculation = (3 * x) + 7;
    return calculation;

}
// =================================================================

int main(){

    int n;
    cout<< "Enter the number: ";
    cin >> n;

    int result =  AP(n);
    cout<< "A.P: "<< result << endl;

    return 0;
}