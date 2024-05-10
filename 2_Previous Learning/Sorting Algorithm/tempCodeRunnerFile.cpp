#include<iostream>
using namespace std;

// int selection_Sort(int arr[], int size){
     
//      for (int i = 0; i < size-1; i++)
//      {
//         int min = i;

//         for (int j = i+1; j < size; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
            
//         }
//         swap(arr[min], arr[i]);
//      }

// }

int main(){

    int arr[6] = {1,5,4,3,2,6};
     
     for (int i = 0; i < 6; i++)
     {

      int min = i;

        for (int j = i+1; j < 6; j++) 
        {
            if (arr[j] < arr[min])
            {
               min = arr[j];
            }
            
        }
        
        swap(arr[min], arr[i]);
     }
     
    for (int i = 0; i < 6; i++)
    {
       cout<< arr[i] << " ";
    }
    
    
}