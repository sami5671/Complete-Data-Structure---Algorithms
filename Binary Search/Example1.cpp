// here is the code for binary search

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = (start + end) / 2;

    while(start <= end){
        if (arr[mid] == key)
        {
          return mid;
        }
        if (key > arr[mid])
        {
          start = mid + 1;
        }else{
          end = mid -1;
        }
        
        mid = (start + end) / 2;
    }
    return -1;
}

int main(){

    int even[6] = {10, 11, 12, 13, 14, 15};
    int odd[5] = {100, 200, 300, 400, 500};

    int index = BinarySearch(even, 6, 14);
    cout << "The number is present at the Index: " << index << endl;

    int index2 = BinarySearch(odd, 5, 200);
    cout << "The number is present at the Index: " << index2 << endl;

}