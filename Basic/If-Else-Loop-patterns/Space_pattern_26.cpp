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
        int space = row - 1;
        while (space)
        {
            cout<< " ";
            space--;
        }
        int col = 1;
        int start = n - row + 1;
        while (col<=start)
        {
           cout<< row;
           col++;
        }
        cout<< endl;
        row++;
    }
    getch();
}