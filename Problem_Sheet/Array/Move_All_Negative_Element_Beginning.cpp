#include<iostream>
using namespace std;

// if we sort the array to move the negative element in the beginning then its a naive approach
void Move_Element_Beginning(int arr[], int size){

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size-1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    swap(arr[j], arr[j+1]);
                }
            }
        }
}

// we can use Dutch national flag Algorithm for rearrangement the negative elements in the beginning

void Arrange_Element(int arr[], int size){
    int start = 0;
    int end = size -1;
    while (start < end)
    {
       if (arr[start] < 0)
       {
         start++;
       }else if (arr[end] > 0)
       {
         end--;
       }else{
        swap(arr[start], arr[end]);
       }
    }
}

void Print_array(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout <<  arr[i]  << " ";
    }
}

int main(){
   
   int arr[100] = {1, 2,  -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2,  1};
   int size;
   cin >> size;

//    Move_Element_Beginning(arr, size);
   Arrange_Element(arr, size);
   Print_array(arr, size);

   return 0;
}