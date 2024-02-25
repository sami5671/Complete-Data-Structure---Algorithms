#include<iostream>
using namespace std;

bool Linear_Search(int arr[][100], int row_size, int col_size, int search_Value){

        for (int i = 0; i < row_size; i++)
        {
            for (int j = 0; j < col_size; j++)
            {
                 if (arr[i][j] == search_Value)
                 {
                    return true;
                 }
                 
            }
            
        }
        return false;
}

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


    // finding the search value

    if ( Linear_Search(arr, 4, 3, 100))
    {
       cout << "Search value Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    


    return 0;
}