#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the number: ";
    cin >> n;

    int row = 1;
    while (row<=n)
    {
        int space = n-row;
        while (space)
        {
           cout<< "  ";
           space--;
        }
        int col = 1;
        while (col<=row)
        {
           cout<< "*" << " ";
           col++;
        }
        // 3rd triangle
        col = row - 1;
        while (col>=1)
        {
           cout<< "*" << " ";
           col--;
        }
        
        cout<< endl;
        row++;
    }
    



    return 0;
}