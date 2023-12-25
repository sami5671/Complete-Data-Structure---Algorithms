#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the number: ";
    cin >> n;

    int row = 1;
    while (row<=n)
    {
    // first triangle
    int col  = 1;
    int start = n - row + 1;
    while (col <= start)
    {
       cout<< col << " ";
       col++;
    }
    
    // 2nd triangle
    col = 1;
    int start2 = (row - 1) * 2;
    while (col<= start2)
    {
        cout<< " * ";
        col++;
    }
    
    // 3rd triangle 
    col = n - row + 1;
    
    while (col>= 1)
    {
        cout<<  col << " ";
        col--;
    }
    row++;
    cout<< endl;
   
    
    }
    


    return 0;
}