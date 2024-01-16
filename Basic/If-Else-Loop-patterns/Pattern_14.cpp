#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number: ";
    cin >> n;

    int row = 1;

    while (row<=n)
    {
       int col = 1;
       while (col<=n)
       {
            char ch = 'A' + row + col -2;
            cout<< ch << " ";
            col++;
       }
       cout<< endl;
       row++;
    }
    getch();
}