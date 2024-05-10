#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(int arr[], int size){
   for (int i = 1; i < size; i++)
   {
    int temp = arr[i];
    int j = i -1;

     for (; j>=0; j--)
     {
        if (arr[j] > temp)
        {
            arr[j+1] = arr[j];
        }else{
            break;
        } 
     }
    arr[j+1] = temp;
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

    Insertion_Sort(arr, size);
    Display_Array(arr, size);
}