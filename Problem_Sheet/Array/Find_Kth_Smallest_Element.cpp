#include<iostream>
using namespace std;

int kthSmallest(int arr[], int s, int e, int key)
    {
        for(int i = s; i <= e; i++){

            for(int j = s; j < e -1; j++){
                
               if(arr[j] > arr[j+1]){
                   
                   swap(arr[j], arr[j+1]);
               }
            }
        }

    // print sorted array
    cout<< "Sorted array Is: " ;
    for (int i = 0; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // find the kTh smallest element
    int result = arr[key-1];
    return result;
}


int main(){

    int arr[200] = {7, 10, 4, 20, 15};
    cout<< "Enter start, end, key: ";
    int start, end, key;

    cin >> start >> end>> key;

    int result =  kthSmallest(arr, start, end, key);
    cout << "Kth-->> " << key << " smallest Element is: " << result << endl; 


    return 0;
}

