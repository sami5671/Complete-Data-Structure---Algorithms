#include<iostream>
using namespace std;

int Sort_0_1_2(int arr[], int size){

    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;

    for (int i = 0; i < size; i++)
    {
       if (arr[i] == 0)
       {
         count_0++;
       }else if (arr[i] == 1)
       {
         count_1++;
       }else{
         count_2++;
       }
    }
    
    for (int i = 0; i < size; i++)
    {
       if (count_0 > 0)
       {
         arr[i] = 0;
         count_0--;
       }else if (count_1 > 0)
       {
         arr[i] = 1;
         count_1--;
       }else{
         arr[i] = 2;
         count_2--;
       }
    }
}

void print_array(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}


int main(){

    int arr[200] = {1,2,0,2,1,5};
    int size;

    cout << "Enter the Size: ";
    cin>>size;

    cout << "After Sorting: ";
    Sort_0_1_2(arr, size);
    print_array(arr, size);

    return 0;

}