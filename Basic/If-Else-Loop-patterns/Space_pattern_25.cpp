#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    cout<< " Enter the number: ";
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        int star = n - row + 1;
        while (col<=star)
        {
            cout<< "*";
            col++;
        }
        cout<< endl;
        row++;
    }
    
   
    getch();
}