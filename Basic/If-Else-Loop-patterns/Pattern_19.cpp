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
        char start = 'A' + row -1;
        while (col<=n)
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