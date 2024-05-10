#include<bits/stdc++.h>
using namespace std;    

// function for searching any element of an array (BINARY SEARCH)
int BinarySearch(int arr[],  int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid; // will return answer
        }
        else if (arr[mid] < key) // will check right
        {
            start = mid + 1;  
        }
        else if (arr[mid] > key)  // will check left
        {
            end = mid - 1;
        }
     mid = start + (end - start) / 2;  // update mid value
    }
    return -1;
}

int main(){

    int even[6] = {11,12,13,14,15,16};
    int odd[7] = {11,12,13,14,15,16,17};

    cout<< "After binary search (EVEN) 15 is in Index: "<< BinarySearch(even, 6, 15) << endl;
    cout<< "After binary search (ODD) 15 is in Index: "<< BinarySearch(even, 6, 12);

    return 0;
}