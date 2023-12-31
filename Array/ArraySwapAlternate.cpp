#include<iostream>
using namespace std;

void SwapAlternate(int arr[], int size){
    for (int i = 0; i < size; i=i+2)
    {
        if (i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}

void PrintArray(int arr[], int size){
    cout<< "Swap Alternate Array is: ";
    for (int i = 0; i < size; i++)
    {
      cout<< arr[i]<<" ";
    }
}
int main(){

    int n;
    cout<< "Enter the number: ";
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    SwapAlternate(arr, n);
    PrintArray(arr, n);

    return 0;
}