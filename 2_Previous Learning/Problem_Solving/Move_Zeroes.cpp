// move zeros in the right 

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int move_array(int arr[], int n){

    int i = 0;

    for (int j = 0; j < n; j++)
    {
       if (arr[j] != 0)
       {
          swap(arr[j], arr[i]);
          i++;
       }
       
    }

   
}

void print_array(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout<< arr[i] << " ";
        }
        
}

int main(){

    int arr[5] = {0,1,0,3,12};

    cout<< "1st Array: ";
    print_array(arr,5);
    cout<< endl;
   
    cout<< "Moving Zero 0: ";
    move_array(arr, 5);
    print_array(arr, 5);


    return 0;
}