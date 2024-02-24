#include<iostream>
using namespace std;

int Find_Duplicate(int arr[], int size){

    int start = 0;
    int end = size -1;

    while (start <= end)
    {
       if (arr[start] == arr[end])
       {
            return arr[start];
       }
       else
       {
            start++;
            end--;
       }
    }

}

int main(){

    int arr[200] = {5, 9 , 2 , 3 , 4 , 5 };
    int size = 6;

   int result = Find_Duplicate(arr,size);

   cout << "Duplicate Element is: " << result << endl;
    

    return 0;
}