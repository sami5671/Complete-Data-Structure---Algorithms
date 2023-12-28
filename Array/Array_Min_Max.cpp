#include<iostream>
using namespace std;
// =================================================================
int getMin(int arr[], int size){
    
    int minValue = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }
    return minValue;
}

int getMax(int arr[], int size){
    int maxValue = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

// =================================================================


int main(){
    int size;
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int maxValue = getMax(arr, size);
    int minValue = getMin(arr, size);
    
    cout<< "Max value: "<<maxValue << endl;
    cout<< "Min value: "<<minValue << endl;

    return 0;
}