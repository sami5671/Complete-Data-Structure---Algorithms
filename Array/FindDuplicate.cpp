#include<iostream>
using namespace std;

int FindDuplicate(int arr[], int size){

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        ans = ans^i;
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
    
    int result =  FindDuplicate(arr, n);
    cout<< result << endl;

    return 0;
}