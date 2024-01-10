#include<bits/stdc++.h>
using namespace std;    

int main(){

    pair<int, int> p = {1,3};

    cout<< p.first << " " << p.second << endl;

    pair<int, pair <int, int>> p2 = {1 , { 5,6}};
    cout << p2.first << endl;


    pair< int , int > arr[] = {{1,2}, {3,4}, {5,6}, {7,8}, {9,10}};
    cout << arr[4].first;

    return 0;
}