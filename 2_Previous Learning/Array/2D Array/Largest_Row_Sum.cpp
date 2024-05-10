#include<iostream>
using namespace std;


int printSumRow(int arr[][4], int row , int col){

    int maxi = INT32_MIN;
    int rowIndex = -1;

    for (int row = 0; row <3 ; row++)
    {
        int sum = 0;

        for (int col = 0; col < 4; col++)
        {
            sum = sum + arr[row][col];
        }
      if (sum > maxi)
      {
        maxi = sum;
        rowIndex = row;
      }
    }

    cout<< "Largest sum is: " << maxi << endl;

    return rowIndex;
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

   cout << "Row Wise largest sum In the index of: "<< printSumRow(arr, 3,4);



   return 0;
}