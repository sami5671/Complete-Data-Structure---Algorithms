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

int* Linear_Search_Find_Index(int arr[][100], int row_size, int col_size, int search_Value){

    static int result[2] = {-1, -1}; // Initialize with invalid indices

    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            if (arr[i][j] == search_Value)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
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



    if ( Linear_Search(arr, 4, 3, 12))
    {
       cout << "Search value Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    
    int* result =  Linear_Search_Find_Index(arr, 4, 3, 12);
    cout << "Search value Found At Index: [" << result[0] << "][" << result[1] << "]" << endl;


    return 0;
}