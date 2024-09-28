#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {

    //    print space
    for (int col = 0; col < row; col++)
    {
        cout<< " ";
    }
    // print start *
    for (int col = 0; col < 2*n - (2*row+1); col++)
    {
        cout << "*";
    }
      //    print space
    for (int col = 0; col < row; col++)
    {
        cout<< " ";
    }
    
    cout << endl;
    }
    
}