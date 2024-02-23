#include<iostream>
#include<unordered_map>
using namespace std;


void Find_Union_Array(int arr_1[], int arr_2[], int n, int m){

    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr_1[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        map[arr_2[i]]++;
    }
    
    cout<< map.size()<<endl;


}

int main(){

    int arr_1[100] = {1,2,3,4,5};
    int arr_2[100] = {1,2,3};

    int n = 5; 
    int m = 3; 

    cout<< "Union Array is: ";
    Find_Union_Array(arr_1, arr_2, n, m);

    return 0;   
}