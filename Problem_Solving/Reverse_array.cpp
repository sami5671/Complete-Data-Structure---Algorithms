#include<iostream>
using namespace std;

int reverse_array(int arr[], int size){

    int start = 0;
    int end = size -1;

   for (int start = 0; start < end; start++, end--)
   {
     swap(arr[start], arr[end]);
   }
    // while (start < end)
    // {
    //       swap(arr[start], arr[end]);
    //       start++;
    //       end--;
    // }
}

void print_array(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
}

int main (){

    int arr[5] = {1,2,3,4,5};

    cout<< "Original Array: ";
    print_array(arr, 5);
    cout<< endl;
    cout<< "Reversed Array: ";
    reverse_array(arr, 5);
    print_array(arr, 5);


    return 0;
}