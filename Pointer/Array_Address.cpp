// arr[i] = *(arr+i);  ---> formula

#include<iostream>
using namespace std;

int main(){

    int arr[10] = {11,12,13,14,15,16};

    cout<< "Address of the first memory block is: "<< arr <<endl;
    cout<< "Address of the first memory block is: "<< &arr[0] <<endl;

    cout<< "1st Location: " << *arr <<endl;
    cout<< "1st Location + 5: " << *arr + 5 <<endl;


    cout<< "2nd Location value: " << *(arr + 1) <<endl;


    int i = 3;
    cout << i[arr] << endl;

cout<< '\n';
    // size of array and pointer
    int temp[10] = {123,24};
    cout<< sizeof(temp) << endl;

    cout<< "1st " <<sizeof(*temp) << endl;
    cout<< "2nd " <<sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout<<sizeof(ptr) << endl;
    cout<<sizeof(*ptr) << endl;
    cout<<sizeof(&ptr) << endl;


    // size, address of array and pointer
    int a [20] = {234,23423,542,4};

    cout << "--> "<< &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

cout << '\n';

    int *p = &a[0];

    cout << p << endl;
    cout << *p << endl;
    cout << "--> "<< &p << endl;


cout << '\n';

// symbol table
int sami[10];

// sami = sami + 1; error

int *pointer = &a[0];
cout<< pointer << endl;
pointer = pointer + 1;  
cout<< pointer << endl;



    return 0;
}