#include<iostream>
using namespace std;    

int MAX(int arr[], int n){

    int max = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
           max = arr[i];
        } 
    }
    return max;
}

int MIN(int arr[], int n){

    int min = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
           min = arr[i];
        } 
    }
    return min;
}



// we can first sort the arrays then the 1st element would be the minimum value and the last element would be the maximum value
// void Bubble_Sort(int arr[], int size){
//      for (int i = 0; i < size; i++)
//      {
//         for (int j = 0; j < size -1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//      }

//      cout << "MIN: "<< arr[0] << endl;
//      cout << "MAX: "<< arr[size - 1] << endl;
// }

void print_array(int arr[], int n){

  
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[50] = {10, 20, 50, 40, 15};
    int size;
    cout<< "Enter the size: ";
    cin >> size;


    cout << "Original Array: ";
    print_array(arr, size);
    cout << endl;


    cout << "Max: " << MAX(arr, size) << endl;
    cout << "Min: " << MIN(arr, size) << endl;

    // Bubble_Sort(arr, size);
  
    


    return 0;

}