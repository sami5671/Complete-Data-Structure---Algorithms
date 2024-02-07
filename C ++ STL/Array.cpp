#include<iostream>
#include<Array>

using namespace std;

int main(){

    int basic [3] = {12,23,32};

    array<int, 5> arr = {10,12,2,45,5};

    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << endl;
    }
    
    cout << "Element at Second Index: "<< arr.at(1) << endl;

    cout<< "First element: "<< arr.front()<< endl;
    cout<< "Last element: "<< arr.back()<< endl;

}