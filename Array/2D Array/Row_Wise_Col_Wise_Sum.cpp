#include<iostream>
using namespace std;


void printSumRow(int arr[][4], int row , int col){

    for (int row = 0; row <3 ; row++)
    {
        int sum = 0;

        for (int col = 0; col < 4; col++)
        {
            sum = sum + arr[row][col];
        }
       cout << sum << " ";
    }
}

void printSumCol(int arr[][4], int row , int col){

    for (int col = 0; col <4 ; col++)
    {
        int sum = 0;

        for (int row = 0; row < 3; row++)
        {
            sum = sum + arr[row][col];
        }
       cout << sum << " ";
    }
}


int main(){


    int arr[3][4];

    cout << "Enter the elemets: ";

    for (int row = 0; row <3 ; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin>> arr[row][col];
        }
       
    }

    // print 
    cout << "Entered 2D Array is: "<< endl;

    for (int row = 0; row < 3 ; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout <<  arr[row][col] << " ";
        }
         cout << endl;
    }

//   cout << "Row Wise sum is: ";
//   printSumRow(arr, 3,4);

  cout << "Col Wise sum is: ";
  printSumCol(arr, 3,4);
 
    
    
}