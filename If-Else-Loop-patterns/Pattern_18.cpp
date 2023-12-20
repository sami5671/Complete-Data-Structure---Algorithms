#include<iostream>
#include<conio.h>
using namespace std; 
int main(){
    int n;
    cout<< "Enter the number: ";
    cin>>n;

    int row =1;
    while (row<=n)
    {
        int col = 1;
        char start = 'A'+ n - row;
        while (col<=row)
        {
            cout<< start << " ";
            start++;
            col++;
           
        }
        cout<< endl;
        row++;
    }
    getch();
}