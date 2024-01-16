#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    int row = 1;
    while (row<=n)
    {
        int space = n - row;
        while (space)
        {
            cout<< " ";
            space--;
        }
        int col = 1;
        int start = row;
        while (col<=row)
        {
           cout<< row;
           col++;
        }
        cout<< endl;
        row++;
    }
    getch();
}