#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int arr[], int size){
     for (int i = 0; i < size; i++)
     {
        for (int j = 0; j < size -1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
     }
}

void Display_Array(int arr[], int size){
    
    cout<< "Sorted Array is: ";

    for (int i = 0; i < size; i++)
    {
       cout<< arr[i]<< " ";
    }
}


int main(){

    int arr[6] = {12,3,43,1,3,5};
    int size = 6;

    Bubble_Sort(arr, size);
    Display_Array(arr, size);
}