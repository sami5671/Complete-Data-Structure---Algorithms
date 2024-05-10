#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int n;
    cout<< "Enter the Number: ";
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        int col = 1;
         char ch = 'A' +  row - 1;
        while (col<=n)
        {
        cout<< ch << " ";
        ch++;
        col++;
        }
        cout<< endl;
        row++;
    }
    
    getch();
}