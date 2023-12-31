#include<iostream>
using namespace std;

int FindUnique(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<< "Enter the number: ";
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   int result =  FindUnique(arr, n);
   cout<< "Unique Element in array is: "<< result << endl;

    return 0;
}