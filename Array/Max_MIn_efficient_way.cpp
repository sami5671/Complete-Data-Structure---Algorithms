#include<iostream>
using namespace std;

int getMax(int arr[], int size){
    
    int maxValue = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        maxValue = max(maxValue, arr[i]);
    }
    return maxValue;
}
int getMin(int arr[], int size){
    int minValue = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
       minValue = min(minValue , arr[i]);
    }
    return minValue;
}

int main(){

    int n;
    cin >> n;
    
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout<< "Max value: "<< getMax(arr, n) << endl;
    cout<< "Min value: "<< getMin(arr, n) << endl;

    return 0;
}