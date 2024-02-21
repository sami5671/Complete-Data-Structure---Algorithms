#include<iostream>
using namespace std;



// if we sort the array to move the element in the beginning then its a naive approach
void Move_Element_Beginning(int arr[], int size){

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size-1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    swap(arr[j], arr[j+1]);
                }
            }
        }
        
}

void Print_array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout <<  arr[i]  << " ";
    }
}

int main(){
   
   int arr[100] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
   int size;
   cin >> size;

   Move_Element_Beginning(arr, size);
   Print_array(arr, size);

   return 0;
}