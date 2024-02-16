// rotate array with a key element
#include<iostream>
using namespace std;

int rotate_array(int arr[], int temp[], int k, int n){

    
    for (int i = 0; i < n; i++)
    {
        temp[(i+k) % n] = arr[i];
    }

    // copy elements 

    for (int i = 0; i < n; i++)
        {
        arr[i] = temp[i];
        }
    }


    void print_array(int arr[], int n){

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        
    }


int main(){

    int arr[5] = {1, 2, 3, 4};
    int temp [4] ={0};
    int key = 2;

    rotate_array(arr,temp, key, 4);
    print_array(arr, 4);


    return 0;
}