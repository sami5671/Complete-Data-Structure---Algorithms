#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        
    }
    
    return 0;
}

int main(){

    int key;
    cin>>key;
    int arr[100] = {12, 23, 413, -134, 155, 6, 7};

    bool value = linearSearch(arr, 7, key);
    if (value == 1)
    {
        cout<< "Is present" << endl;
    }else{
        cout<< "Is not present" << endl;
    }
    

    return 0;
}