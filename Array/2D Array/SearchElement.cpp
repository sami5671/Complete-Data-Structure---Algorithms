#include<iostream>
using namespace std;


bool isPresent(int arr[][4], int search, int row, int col){

    for (int row = 0; row <3 ; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == search)
            {
               return 1;
            }
            
        }
    }

    return 0;
}


int main(){


    int arr[3][4];

    for (int row = 0; row <3 ; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin>> arr[row][col];
        }
       
    }

    // print 
    for (int row = 0; row < 3 ; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout <<  arr[row][col] << " ";
        }
         cout << endl;
    }

int search;
cin>> search;

    if (isPresent(arr, search, 3, 4))
    {
        cout<< "Found";
    }else{
        cout<< "Not Found";
    }
    
    
}