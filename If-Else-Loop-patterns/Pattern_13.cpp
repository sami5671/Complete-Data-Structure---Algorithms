#include<iostream>
using namespace std;
int main(){

    int n;
    cout<< "Enter the number: ";
    cin>>n;

    int row = 1;
    char start  = 'A';
    while (row<=n)
    {
        int col = 1;
        while (col<=n)
        {
            cout << start << " ";
            start++;
            col++;
        }
        cout<< endl;
        row++;
    }
    

    return 0;
}