#include<iostream>
using namespace std;

int Find_Union_Array(int arr_1[], int arr_2[], int n, int m){

    int count = 0;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr_1[i] < arr_2[j]) {
            cout << arr_1[i] << " ";
            i++;
            count++;
        }
        else if (arr_1[i] > arr_2[j]) {
            cout << arr_2[j] << " ";
            j++;
            count++;
        }
        else {
            cout << arr_2[j] << " ";
            i++;
            j++;
            count++;
        }
    }

    // remaining elements of arr_1
    while (i < n) {
        cout << arr_1[i] << " ";
        i++;
        count++;
    }

    // remaining elements of arr_2
    while (j < m) {
        cout << arr_2[j] << " ";
        j++;
        count++;
    }

    return count;
}


int Find_Intersection_Array(int arr_1[], int arr_2[], int n, int m){

    int i = 0, j = 0, count = 0;
    while (i < n && j < m) 
    {
        if (arr_1[i] < arr_2[j])
        {
            i++;
        }
        else if(arr_1[i] > arr_2[j]){
            j++;
        }
        else{

            cout << arr_1[i] << " ";
            i++;
            j++;
            count++;
        }
    }
    
    return count;
}   

int main(){

    int arr_1[100] = {85, 88, 100, 132, 154, 166};
    int arr_2[100] = {85, 99, 100};

    int n = 6; 
    int m = 3; 

    // cout<< "Union Array is: ";
    // int result = Find_Union_Array(arr_1, arr_2, n, m);

    cout<< "Intersection Array is: ";
    int result = Find_Intersection_Array(arr_1, arr_2, n, m);

    cout << endl;
    cout << "Number Of Elements: "<< result << endl;

    return 0;
}
