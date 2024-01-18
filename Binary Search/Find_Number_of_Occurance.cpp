#include<bits/stdc++.h>
using namespace std;

// =================================================================
int firstOccurrence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid  = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
           ans = mid;
           end = mid - 1 ;
        }
        else if (arr[mid] < key)
        {
           start = mid + 1;
        }
        else if (arr[mid] > key)
        {
           mid = mid - 1;
        }
     mid  = start + (end - start) / 2;
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
// =================================================================
int main(){
     
     int even[12] = {10, 11, 12, 13,13,13,13,13, 14, 18 , 19, 20};

int first =  firstOccurrence(even, 12, 13);
int last =  lastOccurrence(even, 12, 13);

     cout<< "First occurrence of 3 is in index: "<< first << endl;
     cout<< "Last occurrence of 3 is in index: "<< last << endl;

     cout << "Number of occurrences of 3 is: "<< (last - first) + 1 << endl;


     

    return 0;
}