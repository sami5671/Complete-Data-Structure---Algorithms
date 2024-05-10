#include<iostream>
using namespace std;

int main(){
    int i = 1, n;
    cout<< "Enter a number: ";
    cin >> n;

    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<< "*";
            j = j + 1;
        }
        cout<< endl;
        i = i + 1;
        
    }
    

    return 0;
}