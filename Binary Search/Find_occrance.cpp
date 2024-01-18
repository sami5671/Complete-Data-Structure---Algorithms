// find first and last occurrence 

int firstOccurrence(int arr[], int size, int  key){

  int start = 0;
  int end = size - 1;
  int ans = -1;

  int mid = start + (end - start)/2;

  while (start <= end)
  {
     if (arr[mid] == key) 
     {
        ans = mid;
        end = mid -1; // then after it will check left in the array
     }
     else if (arr[mid] < key) 
     {
       start = mid + 1; // it will change the value of start = mid + 1, will check right of the array
     }
     else if (arr[mid] > key)
     {
       end = mid - 1; // it will change the value of end = mid - 1, will check left of the array
     }

     mid = start + (end - start)/2;
  }
  return ans;

}

int lastOccurrence(int arr[], int size, int  key){

  int start = 0;
  int end = size - 1;
  int ans = -1;

  int mid = start + (end - start)/2;

  while (start <= end)
  {
     if (arr[mid] == key) 
     {
        ans = mid;
        start  = mid + 1;  // then after it will check  right the array
     }
     else if (arr[mid] < key) 
     {
       start = mid + 1; // it will change the value of start = mid + 1, will check right of the array
     }
     else if (arr[mid] > key)
     {
       end = mid - 1; // it will change the value of end = mid - 1, will check left of the array
     }

     mid = start + (end - start)/2;
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