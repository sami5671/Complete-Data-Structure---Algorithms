#include<iostream>
using namespace std;

int main(){
    int i = 1, n;
    cout<< "Enter the number: ";
    cin>>n;
    
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<< i;
            j = j + 1;
        }
        cout<< endl;
        i++;
        
    }

    return 0;
}