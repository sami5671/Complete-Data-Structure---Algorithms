#include<iostream>
using namespace std;
// =================================================================
void initialize_Array(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5;
    }
    for (int i = 0; i < 10; i++)
    {
       cout<< arr[i] << " ";
    }
}
//================================================================
int main(){

    initialize_Array();

    return 0;
}