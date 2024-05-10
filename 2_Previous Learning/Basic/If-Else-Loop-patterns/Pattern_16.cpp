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
       int value = n;
       while (col<=n)
       {
            cout<< value << " ";
            col++;
            value--;
       }
       cout<< endl;
       row++;
    }
    getch();
}