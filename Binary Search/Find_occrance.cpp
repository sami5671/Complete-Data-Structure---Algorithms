// find first and last occurrence 
int firstOccurrence(int arr[], int size, int key){

    int start = 0, end = size-1;
    int ans = -1;

    while (start <= end)
    {

       int mid = start + (end-start)/2;

       if (arr[mid] == key)
       {
         ans = mid;
         end = mid -1;
       }
       else if (key > arr[mid])
       {
         start = mid + 1;
       }else if (key < arr[mid])
       {
         end = mid - 1;
       }
       
    }
    return ans;
}
int lastOccurrence(int arr[], int size, int key){

    int start = 0, end = size-1;
    int ans = -1;

    while (start <= end)
    {

       int mid = start + (end-start)/2;

       if (arr[mid] == key)
       {
         ans = mid;
         start = mid + 1;
       }
       else if (key > arr[mid])
       {
         start = mid + 1;
       }else if (key < arr[mid])
       {
         end = mid - 1;
       }
       
    }
    return ans;
}

#include<bits/stdc++.h>
using namespace std;


int main(){

    int even [10] = {12,13, 14, 15, 16, 16,  16, 19, 20, 21};
    cout << "First occurance of 16 is: " << firstOccurrence(even, 10, 16) << endl;
    
    cout << "Last occurance of 16 is: " << lastOccurrence(even, 10, 16) << endl;
    
    return 0;
}