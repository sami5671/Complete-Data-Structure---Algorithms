#include<iostream>
using namespace std;


void print_array(int arr[][100], int row_size, int column_size){

    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < column_size; j++)
        {
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    
   int arr[100][100] = {

        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10, 11, 12},
       
    };
    print_array(arr, 4, 3);


    return 0;
}