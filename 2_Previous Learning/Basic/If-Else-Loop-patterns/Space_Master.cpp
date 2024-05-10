#include<iostream>
using namespace std;
int main(){

    int n;
    cout<< "Enter the number: ";
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        // first triangle for space
        int space = n-row;
        while (space)
        {
           cout<< "  ";
           space--;
        }

        // 2nd triangle 
        int col = 1;
        while (col<=row)
        {
           cout<< col << " ";
           col++;
        }

        // 3rd triangle 
        int start = row -1;
        while (start)
        {
            cout<< start << " ";
            start--;
        }
        
        cout<<endl;
        row++;
        
    }

    return 0;
}