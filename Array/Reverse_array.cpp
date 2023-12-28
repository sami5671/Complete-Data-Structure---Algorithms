#include<iostream>
using namespace std; 

int ReverseArray(int arr[], int size){

    int start =0, end = size-1;

    while (start <= end)
    {
       swap(arr[start], arr[end]);
       start++;
       end--;
    }
}

int PrintArray(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
       cout<< arr[i]<<" ";
    }
    
}
// main function
int main(){

    int size;
    cin>>size;

    int arr[100] = {1,2,3,4,5,6,7,8,9,10};

    ReverseArray(arr, size);
    PrintArray(arr, size);

    return 0;
}