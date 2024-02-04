#include<iostream>
using namespace std;

void selection_Sort(int arr[], int size){
     
   for (int i = 0; i < size-1; i++)
   {
       int min = i;

       for (int j = i+1; j < size; j++)
       {
          if (arr[j] < arr[min])
          {
             min = j;
          }
       }
       swap(arr[min], arr[i]);
   }
   
}

void display_sorted_array(int arr[], int size){

    cout<< "Sorted Array is: ";

    for (int i = 0; i < size; i++)
    {
      cout<< arr[i]<<" ";
    }
}


int main(){

    int arr[6] = {11,5,4,3,12,6};
    selection_Sort(arr, 6);
    display_sorted_array(arr, 6);

}