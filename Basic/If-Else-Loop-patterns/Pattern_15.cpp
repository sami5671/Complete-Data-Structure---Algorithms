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
       
       while (col<=row)
       {
            char ch = 'A'+ row -1;
            cout<< ch << " ";
         
            col++;
       }
       cout<< endl;
       row++;
    }
    getch();
}