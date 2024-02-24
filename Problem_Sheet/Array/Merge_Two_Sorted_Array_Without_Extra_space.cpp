#include<iostream>
using namespace std;

void Merge_Two_Array(int arr_1[], int arr_2[], int n , int m){

    int i = n -1;
    int j = m -1;
    int k = n + n - 1;

    while( j >= 0){
        if ( i>= 0 && arr_1[i] > arr_2[j] )
        {
            arr_1[k] = arr_1[i];
            k--;
            i--;
        }else{
            arr_1[k] = arr_2[j];
            k--;
            j--;
        }
    }
     
}



int main(){

    int arr1[100] = {1,2,3,0,0,0};
    int arr2[100] = {2,5,6};

    int n = 6;
    int m = 3;

    Merge_Two_Array(arr1, arr2, n, m);

    return 0;
}