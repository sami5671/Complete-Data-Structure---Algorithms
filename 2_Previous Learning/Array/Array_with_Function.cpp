#include<iostream>
#include<string.h>
using namespace std;

// =================================================================
int PrintArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
}
// =================================================================
char PrintArrayChar(char arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
}
// =================================================================
double PrintArrayDouble(double arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
}
// =================================================================
string PrintArrayString(string arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
}
// =================================================================
int main(){
    int a;
    cout<<"Enter the size for int Array: ";
    cin >> a;
    int arr[100] = {11,12, 13, 14, 15, 16, 17, 18, 19, 20};
    PrintArray(arr, a);


    int b;
    cout<<"\nEnter the size for Char Array: ";
    cin >> b;
    char chArray[100] = {'a', 'b', 'c', 'd', 'e'};
    PrintArrayChar(chArray, b);

    int c;
    cout<<"\nEnter the size for Double Array: ";
    cin >> c;
    double doubleArray[100] = {101.13,131.03,33.81,13.90};
    PrintArrayDouble(doubleArray, c);

    int d;
    cout<<"\nEnter the size for String Array: ";
    cin >> d;
    string stringArray[100] = {"sami", "babul", "candu", "davil", "emran"};
    PrintArrayString(stringArray, d);

    return 0;
}