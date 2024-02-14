// merged two sorted  arrays

#include<iostream>
#include<vector>
using namespace std;

int Merge_Array(int arr1[], int arr2[],int arr3[], int n, int m){

        int i=0;
        int j=0;
        int k=0;

        while (i<n && j<m)
        {
            if (arr1[i] < arr2[j])
            {
                arr3[k] = arr1[i];
                k++;
                i++;
            }else{
                arr3[k] = arr2[j];
                k++;
                j++;
            }
        }
        
        // copy 1st array k element
        while (i<n)
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        // copy 2nd array k element
        while (i<m)
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
        
}

void print_array(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            cout<< arr[i] << " ";
        }
        
}

int main(){

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {0};

    
    cout<< "1st Array: ";
    print_array(arr1,5);
    cout<< endl;
    cout<< "2nd Array: ";
    print_array(arr2,3);
    cout<< endl;


    Merge_Array(arr1, arr2, arr3, 5,3);
    cout<< "Merged Array is: ";
    print_array(arr3, 8);

    return 0;
}