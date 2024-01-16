#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    int row = 1;
     int num = 1;
    while (row<=n)
    {
        int space = n - row;
        while (space)
        {
            cout<< "  ";
            space--;
        }
        int col = 1;
       
        while (col<=row)
        {
           cout<< num << " ";
           col++;
           num++;
        }
        cout<< endl;
        row++;
    }
    getch();
}