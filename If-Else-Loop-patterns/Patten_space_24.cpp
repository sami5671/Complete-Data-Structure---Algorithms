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
       int col = 1;
       int count = n - row + 1;
       while (col<= count)
        {
            cout<< " *";
            col++;
        }
        cout<< endl;
        row++;
        
    }
    getch();
}