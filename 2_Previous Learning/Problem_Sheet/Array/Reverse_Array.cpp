#include<iostream>
using namespace std;    

void Reverse_Array(int arr[], int n){

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
       swap(arr[start], arr[end]);
       start++;
       end--;
    }
}

void print_array(int arr[], int n){

  
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[50] = {10, 20, 30, 40, 50};
    int size;
    cout<< "Enter the size: ";
    cin >> size;


    cout << "Original Array: ";
    print_array(arr, size);
    Reverse_Array(arr, size);
    cout << "Reverse Array: ";
    print_array(arr, size);

    return 0;

}