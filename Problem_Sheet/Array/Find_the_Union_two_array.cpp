#include<iostream>
using namespace std;

void Find_Union_Array(int arr_1[], int arr_2[], int n, int m){

    int Union_Array[200] = {0};
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr_1[i] < arr_2[j]) {
            cout << arr_1[i] << " ";
            i++;
        }
        else if (arr_1[i] > arr_2[j]) {
            cout << arr_2[j] << " ";
            j++;
        }
        else {
            cout << arr_2[j] << " ";
            i++;
            j++;
        }
    }

    // remaining elements of arr_1
    while (i < n) {
        cout << arr_1[i] << " ";
        i++;
    }

    // remaining elements of arr_2
    while (j < m) {
        cout << arr_2[j] << " ";
        j++;
    }

    cout << endl;
}

int main(){

    int arr_1[100] = {85, 88, 100, 132, 154, 166};
    int arr_2[100] = {85, 99};

    int n = 6; 
    int m = 2; 

    cout<< "Union Array is: ";
    Find_Union_Array(arr_1, arr_2, n, m);

    return 0;
}
